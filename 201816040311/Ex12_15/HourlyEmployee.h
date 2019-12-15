//
// Created by Administrator on 2019/12/13.
//

#ifndef EX12_15_HOURLYEMPLOYEE_H
#define EX12_15_HOURLYEMPLOYEE_H

#include "Employee.h"
using namespace std;

class HourlyEmployee:public Employee {
public:
    HourlyEmployee(const string &,const string &,const string &,double ,double );
    virtual ~HourlyEmployee(){};//virture

    void setWage(double );
    double getWage()const;

    void setHours(double );
    double getHours()const;

    virtual double earnings()const override;
    virtual void print()const override;
private:
    double wage;
    double hours;
};


#endif //EX12_15_HOURLYEMPLOYEE_H
