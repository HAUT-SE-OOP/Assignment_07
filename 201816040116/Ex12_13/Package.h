#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
using namespace std;
#include<string>
class Package   //定义一个Package的类
{
public:
    Package(string,string,string,string,string,string,string,double,double);
    void setcost(double,double);    //判断是否合理并重载重量和每盎司费用
    virtual double calculateCost();     //计算邮寄费用
    void display();//显示有关邮寄信息
    string getsender();
    string getsendaddress();
    string getrecipient();
    string getaddress();
    string getcity();
    string getstate();
    string getzipcode();
    double getweight();
    double getcost();
protected:      //定义寄件人，收件人，地址，城市，州，邮编，重量，每盎司费用变量
    string sender;
    string sendaddress;
    string recipient;
    string address;
    string city;
    string state;
    string zipcode;
    double weight;
    double cost;

};
#endif // TWODAYPACKAGE_H_INCLUDED
