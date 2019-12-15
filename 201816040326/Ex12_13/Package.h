#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <iostream>
#include<string>
using namespace std;

class Package
{
public:
    Package(string,string,string,string,string,string,double,double);
    virtual double calculate_Cost();
    virtual void print();

    string getsender_name();
    string getrecipient_name();
    string getaddress();
    string getcity();
    string getstate();
    string getpostalcode();
    double getweight();
    double getcost();

    /*void setsender_name(string);
    void setrecipient_name(string)；
    void setaddress(string);
    void setcity(string);
    void setstate(string);
    void setpostalcode(string);
    void setweight(double);
    void setcost(double);*/

private:
    string sender_name;//寄件人姓名
    string recipient_name;//收件人姓名
    string address;//地址
    string city;//所在城市
    string state;//所在州
    string postalcode;//邮编
    double parcel_weight;//快递重量
    double cost_per_ounce;//每盎司快递所需运费
};


#endif // PACKAGE_H_INCLUDED
