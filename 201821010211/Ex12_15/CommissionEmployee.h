#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED

#include<string>
#include"Employee.h"
using namespace std;
class CommissionEmployee:public Employee
{
public:
    CommissionEmployee(const string &,const string &,const string &,double=0.0,double=0.0);
    void setCommissionRate(double);
    double getCommissionRate()const;
    void setGrossSales(double);
    double getGrossSales()const;
    virtual double earnings();
    virtual void print();
private:
    double grossSales;
    double commissionRate;
};

#endif // COMMISSIONEMPLOYEE_H_INCLUDED
