#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include <iostream>
#include"Package.h"
using namespace std;

class TwoDayPackage: public Package
{
public:
      TwoDayPackage(const string , const string , const string , const string , const string ,
      const string , const string, const string, const string,const string, const double , const double , const double );
    void setaverage(double);
    double getaverage( );
    double calculateCost( );
    void print();
private:
    double average;
};
#endif // OVERNIGHTPACKAGE_H_INCLUDED
