#include <iostream>
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
#include"Package.h"



using namespace std;

int main()
{
    vector <Package *> packages(3);
    packages[0] = new Package("Bob","Lucy","China","USA","123",10,15);
    packages[1] = new OvernightPackage("Bob","Lucy","China2","USA2","123",10,15,10);
    packages[2] = new TwoDayPackage("Bob","Lucy","China3","USA3","123",10,15,5);
    double sum = 0;
    for(auto Pac : packages)
    {
        cout<<"rAdress: "<<Pac->getrAdress()<<endl;
        cout<<"sAdress: "<<Pac->getsAdress()<<endl;
        cout<<"Cost: "<<Pac->calculateCost()<<endl<<endl;
        sum += Pac->calculateCost();
    }
    cout<<"AllCost: "<<sum<<endl;


    return 0;
}
