#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED
#include<iostream>
#include"Employee.h"
#include<string.h>
using namespace std;
class CommissionEmployee : public Employee
{
public:
    CommissionEmployee(string,string,string,double,double);
    void setCommissionRate(double);
    double getCommissionRate();

    void setGrossSales(double);
    double getGrossSales();

    double earnings();
    void print();
private:
    double grossSales;
    double commissionRate;
} ;


#endif // COMMISSIONEMPLOYEE_H_INCLUDED
