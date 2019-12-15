#include"Package.h"
#include"OvernightPackage.h"
#include"TwoDayPackage.h"
#include<iostream>
#include<vector>
#include<typeinfo>
using namespace std;
int main()
{
    vector<Package *> package(2);
    double totalcost=0;
    package[0]=new OvernightPackage("Jerry","Henan university of technology","Smith","No.100 Golden Gate Bridge","SanFrancisco","California","94101",100,2,0.5);
    package[1]=new TwoDayPackage("Jerry","Henan university of technology","Smith","No.101 Golden Gate Bridge","SanFrancisco","California","94101",100,2,10);
    for(Package* p:package){
        cout<<"from "<<p->getSenderAddress()<<" to "<<p->getConsigneeAddress()<<endl;
        double temp=p->calculateCost();
        cout<<temp<<endl;
        totalcost+=temp;
    }
    cout<<totalcost<<endl;
    return 0;
}
