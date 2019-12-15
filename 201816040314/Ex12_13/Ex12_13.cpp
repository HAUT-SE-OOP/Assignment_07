//Ex12_13.cpp
#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <vector>
using namespace std;

int main()
{
    vector<Package*> packageArray(2);//initialize vector with pointer
    double AllCostOfPackage=0;
    packageArray[0]=new TwoDayPackage("Amy","addressB","cityA","stateA","Jack","addressB","cityB","stateB","462181",20,4,20);//create the object and push into vector
    packageArray[1]=new OvernightPackage("Tom","addressC","cityC","stateC","Alice","addressD","cityD","stateD","305420",60,0.5,10);//create the object and push into vector
    for(Package *package:packageArray)
    {
        package->print();
        cout<<"Cost of Package :"<<package->calculateCost()<<endl<<endl;
        AllCostOfPackage+=package->calculateCost();
        delete package;
    }
    cout<<"Cost of the all packages :"<<AllCostOfPackage<<endl;


}
