#include <iostream>
#include <iomanip>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
#include<vector>

using namespace std;
int main()
{
    vector<Package*> pac(4);//创建Package、TwoDayPackage、OvernightPackage类的对象
    pac[0]=new TwoDayPackage("Tom","Tony","哈佛大学","Cambridge, Ma","1000",12,14,4);
    pac[1]=new TwoDayPackage("一","二","三","四","200",10,20,6);
    pac[2]=new OvernightPackage("钢铁侠","蜘蛛侠","哥伦比亚大学","Manhattan","1110",23,41,20);
    pac[3]=new OvernightPackage("五","六","七","八","00025",41,32,8);
 for ( size_t i = 0; i < pac.size(); i++ )
 {
    cout<<"\n\n"<<endl;
    cout<<"\n寄件人："<<pac[i]->getsender()<<"\n收件人："<<pac[i]->getaddressee()<<"\n地址："<<pac[i]->getaddress()<<"\n城市："<<pac[i]->getcity()<<"\n邮寄编码："<<pac[i]->getcode()<<"\n包裹重量："<<pac[i]->getweight()<<"\n单价："<<pac[i]->getprice()<<endl;

    cout<<"运费:"<<pac[i]->calculatecost()<<endl;
 }
}

