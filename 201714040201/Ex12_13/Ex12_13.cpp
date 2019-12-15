//Ex12_13.cpp
//Test program for Package hierarchy
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

int main()
{
    //set floating-point output formatting
    cout<<fixed<<setprecision(2);

    //instantiate three objects
    Package package1("RuiyangHong","Wangcan","zhengzhou","xinmi","465200",10,10);
    TwoDayPackage package2("RuiyangHong","Wangcan","zhengzhou","xinmi","465200",10,10,10000);
    OvernightPackage package3("RuiyangHong","Wangcan","zhengzhou","xinmi","465200",10,10,100);

    //get objects information
    package1.print();
    cout<<package1.calculateCost()<<"\n\n";
    package2.print();
    cout<<"\nThe totalFee of this package is:"<<package2.calculateCost()<<"\n\n";
    package3.print();
    cout<<"\nThe totalFee of this package is:"<<package3.calculateCost()<<"\n\n";

    vector<Package *>packages(2);
    packages[0]=&package2;
    packages[1]=&package3;

    double totalFee=0;
    for(Package *packagePtr: packages)
    {
        packagePtr->print();
        cout<<"\nThe totalFee of this package is:"<<packagePtr->calculateCost()<<endl;
        totalFee+=packagePtr->calculateCost();
    }
    cout<<"\n\nThe totalFee is: "<<totalFee;
    return 0;
}//end main
