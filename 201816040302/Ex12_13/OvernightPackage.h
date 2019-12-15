#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include <string>
#include "Package.h"

class OvernightPackage:public Package
{
public:
    OvernightPackage(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,
            const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double,double,double);//constructor
   
    void setextraOuncesPerOunce( double );
    virtual double calculateCost() ;
    void print();
    virtual double calculateCost();//calculate freight
    virtual void printMessage()const;//print sender and addressee 's message
private:
    double extraCost;
};





#endif // OVERNIGHTPACKAGE_H_INCLUDED
