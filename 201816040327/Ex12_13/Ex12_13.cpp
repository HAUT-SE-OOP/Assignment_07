//
//  main.cpp
//  Ex12_13
//
//  Created by misonomayubw on 2019/12/15.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include <iostream>
#include <vector>
#include <iomanip>

#include "OvernightPackage.hpp"
#include "TwoDayPackage.hpp"
#include "Package.hpp"
using namespace std;

int main()
{
    vector<Package *>packages(4);
    double totalFee=0;//total fee

    packages[0]=new TwoDayPackage("mayu","adao","tk","kyot","akb","kyo","null","null"
                              ,"1000","0000",10,2,0.5);
    packages[1]=new OvernightPackage("mayu2","adao2","tk2","kyot2","akb2","kyo2","null","null"
                              ,"1000","0000",15,2,0.6);
    packages[2]=new TwoDayPackage("jjy","lyt","snh","sh","sx","xa","null","null"
                              ,"1001","0110",13,2,0.5);
    packages[3]=new OvernightPackage("jjy2","lyt2","snh2","sh2","sx2","xa2","null","null"
                              ,"1001","0110",10,2,0.6);
    cout << fixed << setprecision( 2 );
    for(size_t i=0;i<packages.size();i++)
    {
        cout<<"package :"<<i+1<<endl;
        cout<<"----------------------------------------------"<<endl;
        cout<<"*send_add*"<<endl;
        cout<<"send_name："<<packages[i]->getSender()<<endl;
        cout<<"send_detailadd："<<packages[i]->getSenderAddress()<<endl;
        cout<<"send_province："<<packages[i]->getSenderCity()<<endl;
        cout<<"send_city："<<packages[i]->getSenderState()<<endl;
        cout<<"send_code："<<packages[i]->getSenderPostcode()<<endl<<endl;
        cout<<"*acc_add*"<<endl;
        cout<<"acc_name："<<packages[i]->getRecipient()<<endl;
        cout<<"acc_detailadd："<<packages[i]->getRecipientAddress()<<endl;
        cout<<"acc_province："<<packages[i]->getRecipientCity()<<endl;
        cout<<"acc_city："<<packages[i]->getRecipientState()<<endl;
        cout<<"acc_code："<<packages[i]->getRecipientPostcode()<<endl<<endl;
        cout<<"----------------------------------------------"<<endl;
        totalFee+=packages[i]->calculateCost();
        //delete packages[i];

    }
    cout<<"total fee:"<<totalFee<<" yuan";

    return 0;
}
