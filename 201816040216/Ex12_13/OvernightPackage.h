#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED


#include"Package.h"



class OvernightPackage:public Package

{

public:

    OvernightPackage(string,string,string,string,string,string,string,string,string,string,

                     double,double,double);

    void setExtraMoney(double);



    double getExtraMoney();



    double calculateCost();

    void print() const;

private:

    double ExtraMoney;

};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
