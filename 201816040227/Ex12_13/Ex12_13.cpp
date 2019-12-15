#include <iostream>
#include <iomanip>
#include<vector>
using namespace std;

#include "Package.h" // Package class definition
#include "OvernightPackage.h" // OvernightPackage class definition
#include "TwoDayPackage.h" // TwoDayPackage class definition

void virtualViaPointer (const Package *const);
int main ()
{

    OvernightPackage a("Taylor Swift" ,  "137 W San Bernardino Rd", "Redding", "Commonwealth of Pennsylvania", "Lin", "Haunt" ,"Zhengzhou", "Henan",
                       "96003", 2.0, 20.0, 5.0);


    TwoDayPackage b("Taylor Swift" ,  "137 W San Bernardino Rd", "Redding", "Commonwealth of Pennsylvania", "Lin", "Haunt" ,"Zhengzhou", "Henan",
                       "96003", 2.0, 20.0, 10.0);


    vector<Package *> packages(2);//create vector of two base-class pointer

    //initialize vector with pointers to packages
    packages[0]=&a;
    packages[1]=&b;
    for(const Package *packagePtr: packages)
        virtualViaPointer(packagePtr);

}

//call Package virtual functions print
 void virtualViaPointer( const Package * const basePtr)
    {
        basePtr->print();
    }//end function virtualViaPointer
