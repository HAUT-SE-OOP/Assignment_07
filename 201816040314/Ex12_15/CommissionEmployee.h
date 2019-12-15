//CommissionEmployee.h
#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED
#include <string>
#include "Employee.h"
class CommissionEmployee : public Employee
{
public:
    CommissionEmployee(const std::string &,const std::string &,const std::string &,double =0.0,double =0.0);//constructor with five parameter
    virtual ~CommissionEmployee(){}//destructor
    void setCommissionRate(double);//to set the commissionRate
    double getCommissionRate()const;//to get the commissionRate
    void setGrossSales(double);//to set the grossSales
    double getGrossSales()const;//to get the grossSales
    virtual double earnings()const override;
    virtual void print() const override;
private:
    double grossSales;
    double commissionRate;
};


#endif // COMMISSIONEMPLOYEE_H_INCLUDED
