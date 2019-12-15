#include <iostream>
#include <vector>
#include <iomanip>

#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include "Package.h"
using namespace std;

int main()
{
    vector<Package *>packages(4);
    double totalFee=0;//总费用

    packages[0]=new TwoDayPackage("张三","李四","海南省万宁市和乐镇","河南工业大学莲花街100号","海南省","河南省","无","无"
                              ,"1000","0000",10,2,0.5);
    packages[1]=new OvernightPackage("小黄","李四","海南省海口市金山小区","河南工业大学莲花街100号","海南省","河南省","无","无"
                              ,"1000","0000",15,2,0.6);
    packages[2]=new TwoDayPackage("小明","小红","广东省广州市白云区","浙江省温州市苍南县","广东省","浙江省","无","无"
                              ,"1001","0110",13,2,0.5);
    packages[3]=new OvernightPackage("小明","小红","广东省广州市白云区","浙江省温州市瑞安市","广东省","浙江省","无","无"
                              ,"1001","0110",10,2,0.6);
    cout << fixed << setprecision( 2 );
    for(size_t i=0;i<packages.size();i++)
    {
        cout<<"包裹 :"<<i+1<<endl;
        cout<<"----------------------------------------------"<<endl;
        cout<<"*寄件人地址*"<<endl;
        cout<<"寄件人姓名："<<packages[i]->getSender()<<endl;
        cout<<"详细地址："<<packages[i]->getSenderAddress()<<endl;
        cout<<"省份："<<packages[i]->getSenderCity()<<endl;
        cout<<"州："<<packages[i]->getSenderState()<<endl;
        cout<<"邮政编码："<<packages[i]->getSenderPostcode()<<endl<<endl;
        cout<<"*收件人地址*"<<endl;
        cout<<"收件人姓名："<<packages[i]->getRecipient()<<endl;
        cout<<"详细地址："<<packages[i]->getRecipientAddress()<<endl;
        cout<<"省份："<<packages[i]->getRecipientCity()<<endl;
        cout<<"州："<<packages[i]->getRecipientState()<<endl;
        cout<<"邮政编码："<<packages[i]->getRecipientPostcode()<<endl<<endl;


        //OvernightPackage *overnightPackageptr = dynamic_cast<OvernightPackage *>(packages[i])
        cout<<"----------------------------------------------"<<endl;
        totalFee+=packages[i]->calculateCost();
        //delete packages[i];

    }
    cout<<"总费用一共为:"<<totalFee<<" 元";

    return 0;
}
