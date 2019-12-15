#include <iostream>
#include <vector>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
using namespace std;

int main()
{
    Package package("Sue","Beijing","John","Henan","Zhengzhou","State","111234",5.0,2.1);
    package.print();
    cout<<package.getAddress()<<endl;
    cout<<package.getNewAddress()<<endl;;
    OvernightPackage overnightpackage("Sue","Beijing","John","Henan","Zhengzhou","State","111234",4.0,2.1,1.9);
    overnightpackage.print();
    cout<<overnightpackage.getAddress()<<endl;;
    cout<<overnightpackage.getNewAddress()<<endl;
    TwoDayPackage twodaypackage("Sue","Beijing","John","Henan","Zhengzhou","State","111234",6.0,2.1,10.0);
    twodaypackage.print();
    cout<<twodaypackage.getAddress()<<endl;
    cout<<twodaypackage.getNewAddress()<<endl;
    vector < Package* >packages(3);
    packages[0]=&package;
    packages[1]=&overnightpackage;
    packages[2]=&twodaypackage;
    for(int i=0;i<packages.size();i++)
    {
        cout<<packages[i]->calculateCost()<<endl;

    }
}
