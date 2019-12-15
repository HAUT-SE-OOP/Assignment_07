#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <iostream>
#include <cstring>
using namespace std;
class Package
{
public:
    Package(string,string,string,string,string,string,string,double,double);
    virtual double calculateCost();//calculate the fee;
    void setsendername(string);//set sender;
    string getsendername();//return sender;
    void setreceivername(string);//set addressee;
    string getreceivername();//return addressee;
    void setsenderadd(string);//set senteraddress;
    string getsenderadd();//return senteraddress;
    void setreceiveradd(string);//set receiveradd;
    string getreceiveradd();//return receiveradd;
    void setcity(string);//set city;
    string getcity();//return city;
    void setstate(string);//set state;
    string getstate();//return state;
    void setcode(string);//set code;
    string getcode();//return code;
    void setweight(double);//set weigh;
    double getweight();//return weight;
    void setcost(double);//set cost;
    double getcost();//return cost;
private:
    string sendername;
    string senderadd;
    string receivername;
    string city;
    string code;
    string state;
    string receiveradd;
    double weight;
    double cost;
};


#endif // PACKAGE_H_INCLUDED
