#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>
using namespace std;
class Package
{
public :
    Package(const string &,const string &,const string &,const string &,const string &,const string &,const string &,double ,double );
    void setsename(const string &);
    void setrename(const string &);
    void setraddress(const string &);
    void setsaddress(const string &);
    void setcity(const string &);
    void setcontinent(const string &);
    void setpostalcode(const string &);
    void setweight(double);
    void setfee(double);
    virtual double calculateCost();
    double getfee();
    double getweight();
    virtual void print() ;
    string getsename();
    string getrename();
    string getraddress();
    string getsaddress();
    string getcity();
    string getcontinent();
    string getpostalcode();
private:
    string sename;
    string rename;
    string raddress;
    string saddress;
    string city;
    string continent;
    string postalcode;
    double weight;
    double fee;
};


#endif // PACKAGE_H_INCLUDED
