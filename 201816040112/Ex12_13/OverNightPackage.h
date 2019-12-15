#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
using namespace std;
#include "Package.h"
class onpack : public package
{
public:
    explicit onpack(string,string,string,string,string,string,double,double,double);
    void setexpvalue(double);
    double getexpvalue();
    virtual double calcuateCost();
private:
    double expvalue;



};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
