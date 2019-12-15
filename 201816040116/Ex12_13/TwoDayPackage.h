#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include"Package.h"
using namespace std;
#include<string>
class TwoDayPackage:public Package  //定义一个名为TwoDayPackage继承Package的类
{
public:
    TwoDayPackage(string,string,string,string,string,string,string,double,double,double);
    double calculateCost();
    void display();    //计算邮寄费用
private:
    double scost;   //额外平邮费
    double zcost;
};


#endif // TWODAYPACKAGE_H_INCLUDED
