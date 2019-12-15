#include <iostream>
#include <vector>
#include <string>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
using namespace std;

int main()
{
    vector<Package*>package(2);
    package[0]= new TwoDayPackage("Jack", "Rose" , "address1", "address2", "e", "f","g", 2, 2, 2);
    package[1]= new OvernightPackage("Tom", "Jarry" , "address3", "address4", "e", "f","g",2, 2, 2);
    double cost=0;

    for(int i=0;i<2;i++)
    {
       cout<<"From: "<<package[i]->getSa()<<" ";
       cout<<"To: "<<package[i]->getRa()<<" ";
       cout<<"cost: "<<package[i]->calculateCost()<<endl;

       cost=cost+package[i]->calculateCost();
    }
    cout<<"Total cost:"<<cost<<endl;


}
