#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

void virtualViaPointer(Package * const baseClassPtr);
double sumcosts=0;
int main()
{
    double allcost=0.0;
    TwoDayPackage overnightPackage("Bob","Lewis","Pawl","Smith","no4410","no5520","London","NewYork","Texas","Indiana","333-33-3333","111-11-1111",50,1.2,10);
    OvernightPackage twoDayPackage("John","Sena","Lady","Outhen","no4825","no5623","London","NewYork","Texas","Indiana","222-22-2222","444-44-4444",50,1.2,0.5);

    vector<Package *>packages(2);
    packages[0]=&overnightPackage;
    packages[1]=&twoDayPackage;
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

