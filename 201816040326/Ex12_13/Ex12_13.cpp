#include <iostream>
#include<string>
#include<vector>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
using namespace std;

int main()
{
    //Package p1("Amy","Tom","xstreet yroad No.1234","Los Angeles","California","110031",10,0.3);
    //TwoDayPackage p2("Krystal","Jesscia","mstreet nroad No.2345","Los Angeles","California","110031",10,0.3,2);
    //OvernightPackage p3("Judy","John","vstreet wroad No.3456","Los Angeles","California","110031",10,0.3,0.2);
    vector<Package*>packages(2);
    packages[0] = new TwoDayPackage("Krystal","Jesscia","mstreet nroad No.2345","Los Angeles","California","110031",10,0.3,2);
    packages[1] = new OvernightPackage("Judy","John","vstreet wroad No.3456","Los Angeles","California","110031",10,0.3,0.2);
    
    double allcost = 0;

    for ( Package *packagePtr : packages )
    {
        allcost += packagePtr->calculate_Cost();
        packagePtr->print();
        cout << "PackageCost:" << packagePtr->calculate_Cost() <<endl<< endl;
    }
    cout << "allcost:" << allcost << endl;
    return 0;
}
