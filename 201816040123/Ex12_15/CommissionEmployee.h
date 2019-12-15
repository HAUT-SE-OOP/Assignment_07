//Fig 12.13 : CommissionEmployee.h
//CommissionEmployee class derived from Employee.
#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED

#include<string>//C++ standard string class
#include"Employee.h"//Employee class definition

class CommissionEmployee: public Employee
{
public:
    CommissionEmployee(const string &, const string &, const string &, double = 0, double = 0);
    virtual ~CommissionEmployee()
    {}//virtual destructor

    void setCommissionRate(double);//set commission rate
    double getCommissionRate() const;//return gross sales amount

    void setGrossSales(double);//set gross sales amount
    double getGrossSales() const;//return commission rate
    //keyword virtual signals intent to override
    virtual double earnings() const override;//calculate earnings
    virtual void print() const override;//print object
private:
    double grossSales;//gross weekly sales
    double commissionRate;//commission percentage
};//end class CommissionEmployee

#endif // COMMISSIONEMPLOYEE_H_INCLUDED
