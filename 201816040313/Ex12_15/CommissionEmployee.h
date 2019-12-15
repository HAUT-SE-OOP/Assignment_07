#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED
#include "Employee.h"
#include <string>

class CommissionEmployee:public Employee
{
public:
    CommissionEmployee(const std::string &,const std::string &,const std::string &,double=0.0,double=0.0);//constructor
    virtual ~CommissionEmployee(){}//destructor
    void setCommissionRate(double);
    double getCommissionRate()const;
    void setGrossSales(double);
    double getGrossSales()const;

    virtual void print()const; //print worker information
    virtual double earnings()const;// calculate wage
private:
    double grossSales;//gross weekly sales
    double commissionRate;//commission percentage
};


#endif // COMMISSIONEMPLOYEE_H_INCLUDED
