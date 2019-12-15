#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>
#include "Employee.h"

using namespace std;

class CommissionEmployee:public Employee
{
public:
    CommissionEmployee(const string &,const string &,const string &,double=0.0,double=0.0);
    virtual ~CommissionEmployee(){};//virtual destructor

    void setcommissionrate(double);//set commission rate
    double getcommissionrate()const;//return commission rate

    void setgrosssales(double);//set gross sales
    double getgrosssales()const;//return gross sales

    //keyword virtual signals intent to override
    virtual double earnings()const override;//calculate earning
    virtual void print()const override;//print object
private:
    double grosssales;//gross weekly sales
    double commissionrate;//commission percentage
};
#endif // COMMISSION_H
