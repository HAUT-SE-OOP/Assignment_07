//BasePlusCommissionEmployee.h
//BasePlusCommissionEmployee class derived from Employee
#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H
#define BASEPLUSCOMMISSIONEMPLOYEE_H

#include <string>
#include "CommissionEmployee.h"//Employee class definition

using namespace std;

class BasePlusCommissionEmployee:public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const string &,const string &,const string &,double,double,double);//constructor
    virtual ~BasePlusCommissionEmployee(){}//virtual destructor
    void setBaseSalary(double );//set baseSalary
    double getBaseSalary()const;//return baseSalary
    virtual double earnings() override;//calculate earnings
    virtual void print()override;//print object
private:
    double baseSalary;//base salary
};//end class BasePlusCommissionEmployee

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H
