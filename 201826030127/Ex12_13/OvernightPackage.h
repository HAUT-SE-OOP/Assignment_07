#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include"Package.h"//declaration of class package
using namespace std;
class OvernightPackage : public Package
{
public:
    OvernightPackage(string,string,string,string,string,string,string,string,string,string,double,double,double);
    double calculateCost();//calculate all fee
    double getOvernightFee();//return over night fee
    void print();//display object message
private:
 double OvernightFee;//over night fee

};



#endif // OVERNIGHTPACKAGE_H_INCLUDED
