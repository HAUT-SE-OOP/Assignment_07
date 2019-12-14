#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include <string>
#include "Package.h"

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,
            const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double,double,double);//constructor
    virtual ~TwoDayPackage(){}
    virtual double calculateCost();//calculate freight
    void setTwoDayCost(double);
    double getTwoDayCost()const;
    virtual void printMessage()const;//print sender and addressee 's message
private:
    double twoDayCost;
};



#endif // TWODAYPACKAGE_H_INCLUDED
