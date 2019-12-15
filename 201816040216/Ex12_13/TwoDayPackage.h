#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED


#include"Package.h"



class TwoDayPackage:public Package

{

public:

    TwoDayPackage(string,string,string,string,string,string,string,string,string,string,

                     double,double,double);

    void setOverMoney(double);



    double getOverMoney();



    double calculateCost();



    void print() const;

private:

    double OverMoney;

};

#endif // TWODAYPACKAGE_H_INCLUDED
