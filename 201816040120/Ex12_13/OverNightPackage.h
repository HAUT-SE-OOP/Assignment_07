#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "Package.h"
#include <string>
class OverNightPackage :public Package
{
public:
    OverNightPackage(const string &,const string &,const string &,const string &,const string &,
            const string &,const string &,const string &,const string &,const string &,
            double , double , double);
            virtual ~OverNightPackage(){}

            void setExtraCharges(double );
            double getExtraCharges()const;

            virtual void print()const;
            virtual double calculateCost()const;
private:
    double extraCharges;
};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
