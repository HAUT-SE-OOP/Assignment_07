//
// Created by Administrator on 2019/12/13.
//
#include <vector>
#include <iostream>
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

using namespace std;

int main()
{
    double sum=0.0;
    vector<Package *>packages(4);
    packages[0]=new OvernightPackage("liu","wang","HAUT","Henan","zhongyuan",45000,200,1,1);
    packages[1]=new TwoDayPackage("zhang","lin","HAUT","Henan","zhongyuan",45000,200,1,20);
    packages[2]=new TwoDayPackage("xiao","liu","HAUT","Henan","zhongyuan",45000,200,1,20);
    packages[3]=new OvernightPackage("liu","wang","HAUT","Henan","zhongyuan",45000,100,1,1);

    for(int i=0;i<4;i++)
    {
        cout << packages[i]->getSender()<<" "<<packages[i]->getRecipient()<<" "<<packages[i]->calculateCost()<<endl;
        sum+=packages[i]->calculateCost();
        cout<<endl;
    }
    cout <<"Total fee:"<<sum;
    return 0;

}
