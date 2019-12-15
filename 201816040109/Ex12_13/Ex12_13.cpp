#include <iostream>
#include <string>
#include <vector>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
    vector<Package*> p(3);
    p[0] = new Package("Bob", "Jack", "HAUT", "Zhengzhou", "Henan", "450001", 20.0, 2.0);             //20盅司，每盅司邮费2块钱
    p[1] = new TwoDayPackage("Arry", "Marry", "HENU", "Kaifeng", "Henan", "475000", 20.0, 2.0, 10.0); //多收10块钱平寄费
    p[2] = new OvernightPackage("Rose", "Mike", "HAUST", "Luoyang", "Henan", "471000", 20, 2.0, 0.6); //每盅司多收6毛钱
    for(int i=0;i<3;i++)
    {
        cout<<"Sender:"<<p[i]->getSender()<<endl;
        cout<<"Recipient:"<<p[i]->getRecipient()<<endl;
        cout<<"Address:"<<p[i]->getAddress()<<endl;
        cout<<"City:"<<p[i]->getCity()<<endl;
        cout<<"State:"<<p[i]->getState()<<endl;
        cout<<"Postcode:"<<p[i]->getPostcode()<<endl;
        cout<<"Price:"<<p[i]->calculateCost()<<endl;
        cout<<endl;
    }
    system("pause");
}