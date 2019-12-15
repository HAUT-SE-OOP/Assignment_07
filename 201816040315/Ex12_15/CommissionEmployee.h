//Commission Employee.h
//Commission employee class derived from employee
#ifndef COMMISSION_H
#define COMMISSION_H
#include <string>
#include "Employee.h"
using namespace std;

class CommissionEmployee : public Employee
{
public:
    CommissionEmployee( const string &,const string &,const string &,double = 0.0,double = 0.0);
    virtual ~CommissionEmployee(){}//virtual destructor

    void setCommissionRate( double );//set gross sales sales rate
    double getCommissionRate()const;//return rate

    void setGrossSales( double );//set sales
    double getGrossSales()const;//return sales

    virtual double earnings()const override;
    virtual void print()const override;
private:
    double grossSales;
    double commissionRate;
};//end class commission employee
#endif // COMMISSION_H
