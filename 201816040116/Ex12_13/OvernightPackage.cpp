using namespace std;
#include"Package.h"
#include"OvernightPackage.h"
#include<string>
#include <iostream>
OvernightPackage::OvernightPackage(string Sender,string Sendaddress,string Recipient,string Address,
                             string City,string State,string Zipcode,double Weight,double Cost,double Ncost)
                             :Package(Sender,Sendaddress,Recipient,Address,City,State,Zipcode,Weight,Cost)  //构造函数
{
    setcost(Weight,Cost);
    ncost=Ncost;
}
double OvernightPackage::calculateCost()    //计算总邮寄费用
{
    zcost=weight*(cost+ncost);
    return zcost;
}
void OvernightPackage::display() //显示有关邮寄信息
{
    cout<<sender<<" "<<recipient<<" "
        <<address<<" "<<city<<" "
        <<state<<" "<<zipcode<<" "<<ncost<<"\n";
}
