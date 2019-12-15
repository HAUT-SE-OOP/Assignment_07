#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include<string>
using namespace std;
class package
{

public:
    explicit package(string,string,string,string,string,string,double,double);
    void setweight(double);
    void setvalue(double);
    double getweight();
    double getvalue();
    virtual double calcuateCost();
    string getscity();
    string getgcity();
private:
    string sname,gname,scity,gcity,snum,gnum;
    double weight;
    double value;



};


#endif // PACKAGE_H_INCLUDED
