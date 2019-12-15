#ifndef COMMISSION_H
#define COMMISSION_H
#include<string>
using namespace std;
#include "Employee.h"
class CommissionEmployee:public Employee
{
public:
    CommissionEmployee(string,string,string,double,double);
    void setCommissionRate(double);
    double getCommissionRate();
    void setGrossSales(double);
    double getGrossSales();
    virtual double earnings();
    virtual void print();
private:
    double grossSales;
    double commissionRate;

};
#endif
