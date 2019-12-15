#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED

#include<iostream>
#include"Employee.h"
#include<string.h>
using namespace std;
class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee( string,string,string,double,double,double);
    void setBaseSalary(double);
    double getBaseSalary();

    double earnings();
    void print();
private:
    double baseSalary;
} ;
#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
