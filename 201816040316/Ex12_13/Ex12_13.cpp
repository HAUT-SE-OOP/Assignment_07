#include <iostream>
#include<string>
#include<vector>
#include "Definition.h"
#include "OverNightPackage.h"
#include "TwoDayPackage.h"

using namespace std;

int main()
{


    return 0;
}
#include <iostream>
#include <string>
#include <vector>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;
int main()
{
    Package p("PAN","LE","HAUT","ZHENGZHOU","HENAN","450000",2.5,200.0);
    P.calculateCost();
    p.print();
    cout<<"\n";
    TwoDayPackage TDP("PAN","LE","HAUT","ZHENGZHOU","HENAN","450000",2.5,200.0,20.0);
    TDP.print();
    cout<<"\n";
    OverNightPackage ONP("PAN","LE","HAUT","ZHENGZHOU","HENAN","450000",,2.5,200,30.0);
    ONP.calculateCost();
    ONP.print();
    cout<<"\n";

    vector<Package*> package(3);
    p[0] = & P;
    p[1] = & TDP;
    p[2] = & ONP;
    for(int i=0;i<3;i++)
    {
        cout<<"Sender:"<<p[i]->getSenderName()<<endl;
        cout<<"Receiver:"<<p[i]->getAddresseeName()<<endl;
        cout<<"Address:"<<p[i]->getAddress()<<endl;
        cout<<"City:"<<p[i]->getCity()<<endl;
        cout<<"State:"<<p[i]->getState()<<endl;
        cout<<"Postalcode:"<<p[i]->getPostalCode()<<endl;
        cout<<"Cost:"<<p[i]->CalculateCost()<<endl;
        cout<<endl;
    }
    system("pause");
}
