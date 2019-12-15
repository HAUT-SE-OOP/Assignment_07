//
// Created by Administrator on 2019/12/13.
//

#ifndef EX12_15_SALARIEDEMPLOYEE_H
#define EX12_15_SALARIEDEMPLOYEE_H

#include <string>
#include "Employee.h"
using namespace std;

class SalariedEmployee:public Employee{
    SalariedEmployee(const string&,const string &,const string &,double);
    virtual ~SalariedEmployee(){};//virtual destructor

    virtual void setweeklysalary(double);//set weekly salary
    virtual double getweeklysalary()const;//return weekly salary

    //keyword virtual signals intent to override
    virtual double earnings()const override;//calculate earnings
    virtual void print()const override;//print object
private:
    double weeklysalary;//salary per week
};//end class SalariedEmployee


#endif //EX12_15_SALARIEDEMPLOYEE_H
