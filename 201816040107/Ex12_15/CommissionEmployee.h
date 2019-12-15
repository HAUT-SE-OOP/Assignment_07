#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED
#include <string>
#include "Employee.h"
using namespace std;
class CommissionEmployee:public Employee
{
public:
    CommissionEmployee(const string &,const string &,const string &,double=0.0,double=0.0);

    void setCommissionRate(double);//set commissionrate;
    double getCommissionRate() const;//return commission rate;
    void setGrossSales(double);//set grosssales;
    double getGrossSales() const;//return grosssales;
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double grossSales;
    double commissionRate;
};



#endif // COMMISSIONEMPLOYEE_H_INCLUDED
