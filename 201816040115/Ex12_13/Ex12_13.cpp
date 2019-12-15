//Ex12_13.cpp

#include<iostream>
#include<vector>

#include"TwoDayPackage.h"
#include"OvernightPackage.h"

using namespace std;


void virtualViaPointer(Package * const baseClassPtr);
double sumcosts=0;

int main()
{
    TwoDayPackage twoDayPackage("Jack","LianHuaJie","ZhengZhou","HeNan","450000","Rose","YuLinRoad","ChengDu","SiChuan","610000",6,7,10);
    OvernightPackage overnightPackage("Rose","YuLinRoad","ChengDu","SiChuan","610000","Jack","LianHuaJie","ZhengZhou","HeNan","450000",6,6.6,0.4);
    //create vector of two base-class pointer
    vector < Package * > packages(2);

    //initialize vector with pointers to Packages
    packages[0]=&twoDayPackage;
    packages[1]=&overnightPackage;
    //call virtualViaPointer to print each Package's information and calculate cost using dynamic binding
    for( Package *packagePtr : packages)
        virtualViaPointer(packagePtr);
    cout << "total transport costs: " << sumcosts << endl;
}

void virtualViaPointer(Package * const baseClassPtr)
{
    cout << "package's sender: " << endl;
    cout << baseClassPtr->getSenderName() << endl;
    cout << "package's addressee:" << endl;
    cout << baseClassPtr->getAddresseeName() << endl;
    cout << "transport costs:" << baseClassPtr->calculateCost() << endl;
    sumcosts=sumcosts+baseClassPtr->calculateCost();
}

