// Exercise 12.13 Solution:Ex12_13.cpp
#include <iostream>
#include<vector>
using namespace std;
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
int main()
{
    double totalfee=0.0;
    vector<Package *> packages(2);
    packages[0]=new TwoDayPackage("Lewis","13939 South San Antonio Dr","Norwalk","CA","90650","Tom","1319 stevens ave apt A","San Gabriel","CA","91776-4446",20,5.2,2.5);
    packages[1]=new OvernightPackage("Lucy","12345 South San Antonio Dr","Norwalk","CA","96778","Jerry","1234 stevens ave apt A","San Gabriel","CA","34589-2333",20,6.3,1.5);
    for(Package *packagePtr:packages)
    {

        cout<<"From: "<<packagePtr->getSenderAddress();
        cout<<", "<<packagePtr->getSenderCity();
        cout<<", "<<packagePtr->getSenderState();
        cout<<", "<< packagePtr->getSenderPostalCode()<<endl;

        cout<<"To: "<<packagePtr->getReceiverAddress();
        cout<<", "<< packagePtr->getReceiverCity();
        cout<<", "<< packagePtr->getReceiverState();
        cout<<", "<< packagePtr->getReceiverPostalCode()<<endl;
        cout<< "$" << packagePtr->calculateCost()<<endl;
        totalfee += packagePtr->calculateCost();

    }
    cout <<"TotalFee:  $"<< totalfee <<endl;


    return 0;
}
