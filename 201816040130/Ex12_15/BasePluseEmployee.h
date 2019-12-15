#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string>
#include "CommissionEmployee.h"
using namespace std;

class BasePlusCommissionEmployee:public CommissionEmployee  //definition of class BaseP
{
public:
    BasePlusCommissionEmployee(const string &,const string &,const string &,double,double,double); //constructor of BasePlusCommissionEmployee
    void setBaseSalary(double); //declare function to set BaseSalary
    double getBaseSalary()const;

    virtual double earnings()const override; //declare function to earnings
    virtual void print() const override;
private:
    double baseSalary; //data menber baseSalary
};
#endif // BASEPLUS_H
