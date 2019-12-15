#include <iostream>
#include <iomanip>
#include <vector>
#include<string.h>
using namespace std;

#include"Package.h"
#include"TowDayPackage.h"
#include"OvernightPackage.h"

int main()
{
    vector<Package *>package(2);

    package[1]=new TowDayPackage("Bob","112 stress","Beijing","112 state","112",
                                 "Sam","113 stress","HeNan","113 state","113",10,5,5);
    package[2]=new OvernightPackage("Jone","114 stress ","Hong kong","114 state","114",
                                    "Tom","115 stress","Hong Kong","115 state","115",10,5,1);
    for(int i=0;i<package.size();i++)
    {
        cout<<"The address of deliverer is:\n";
        package[i]->getDeAddress();
        cout<<"\nThe address of receiver is:\n";
        package[i]->getReAddress();
        cout<<"The expense is:\n";
        package[i]->calculateCost();
    }
    //delete package;
}
