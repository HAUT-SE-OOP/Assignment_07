using namespace std;
#include "Package.h"
#include"TwoDayPackage.h"
#include<string>
#include <iostream>
TwoDayPackage::TwoDayPackage(string Sender,string Sendaddress,string Recipient,string Address,
                             string City,string State,string Zipcode,double Weight,double Cost,double Scost)
                             :Package(Sender,Sendaddress,Recipient,Address,City,State,Zipcode,Weight,Cost)  //构造函数
{
    setcost(Weight,Cost);
    scost=Scost;
}
double TwoDayPackage::calculateCost()   //计算总邮寄费用
{
    zcost=scost+weight*cost;
    return zcost;
}
void TwoDayPackage::display() //显示有关邮寄信息
{
    cout<<sender<<" "<<recipient<<" "
        <<address<<" "<<city<<" "
        <<state<<" "<<zipcode<<" "<<scost<<"\n";
}
  
