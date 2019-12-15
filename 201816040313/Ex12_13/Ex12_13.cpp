#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{


    double allcost=0.0;
    TwoDayPackage overnightPackage("Bob","Lewis","Pawl","Smith","no4410","no5520","London","NewYork","Texas","Indiana","333-33-3333","111-11-1111",50,1.2,10);
    OvernightPackage twoDayPackage("John","Sena","Lady","Outhen","no4825","no5623","London","NewYork","Texas","Indiana","222-22-2222","444-44-4444",50,1.2,0.5);

    vector<Package *>packages(2);
    packages[0]=&overnightPackage;
    packages[1]=&twoDayPackage;

    for(size_t i=0;i<packages.size();++i)
    {
        packages[i]->printMessage();
        cout<<endl;
        cout<<"expense of transportation: "<<packages[i]->calculateCost()<<endl;
        cout<<endl;
        allcost=allcost+packages[i]->calculateCost();
    }
    cout<<"all cost is: "<<allcost<<endl;
}
