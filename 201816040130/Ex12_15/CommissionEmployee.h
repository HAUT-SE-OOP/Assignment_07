#ifndef COMMOSSION_H
#define COMMISSION_H
#include <string>
#include "Employee.h"
using namespace std;

class CommissionEmployee:public Employee //definition of class CommissionEmployee
{
public:
 CommissionEmployee(const string &,const string &,const string &,double,double); //declare for constructor of CommissionEmployee

 void setCommissionRate(double); //declare function to setCommissionRate
 double getCommissionRate()const; //declare function to getCommissionRate

 void setGrossSales(double); //declare function to setGrossSales
 double getGrossSales()const; //declare function to getGrossSales


 void setCommissionSales(double); //declare function to setCommissionGrossSales
 double getCommissionSales()const; //declare function to getCommissionSales

 virtual double earnings()const override; //declare function to earnings
 virtual void print()const override;
private:
    double grossSales;  //data member grossSales
    double commissionRate;
};

#endif // COMMOSSION_H
