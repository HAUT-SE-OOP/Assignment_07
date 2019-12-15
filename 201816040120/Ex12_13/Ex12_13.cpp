#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "OverNightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"

int main()
{
    cout <<fixed<<setprecision(2);
    vector < Package * > packages(2);

    packages[0] = new TwoDayPackage( "1" ,"2", "3", "4", "5", "6", "7", "8", "9","10", 11.0, 12.0,13.0 );
    packages[1] = new OverNightPackage("99", "88", "77", "66", "55", "44", "33", "22", "21", "20", 19.1, 18.2,5.2 );

    for(Package *packagePtr : packages)
    {
        packagePtr->print();
        cout<<endl;
    }
    for(const Package *packagePtr :packages)
    {
        cout<<"deleting object of"
        <<typeid(*packagePtr).name()<<endl;
    }
    return 0;
}
