#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<typeinfo>
using namespace std;
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"

int main()
{
    //initialize two objects of instructor function
    cout << fixed << setprecision( 2 );

    //create vector of two base-class pointers
    vector< Package * > packages( 2 );

    //initialize vector with various kinds of Packages
    packages[ 0 ] = new TwoDayPackage( "Lily", "China", "yichun", "jiangxi", "beijing", "331100", 2.1, 3, 4 );
    packages[ 1 ] = new OvernightPackage( "John", "China", "shanghai", "shanghai", "yunnan", "441515", 4.5, 2, 2 );

    for( Package *packagePtr : packages)
    {
        packagePtr->print();//print the information of package
        cout << endl;


    }

}
