// Exercise 12.15 Solution:CommissionEmployee.h
//CommissionEmployee class derived from Employee
#ifndef COMMISSION_H
#define COMMISSION_H
#include<string>
#include"Employee.h"

 class CommissionEmployee : public Employee
 {
 public:
    CommissionEmployee( const string &,const string &,const string &,double = 0.0,double = 0.0 );
    virtual ~CommissionEmployee(){ }//virtual destructor

    void setCommissionRate( double );//set commission rate
    double getCommissionRate()const;//return commission rate

    void setGrossSales( double );//set gross sales amount
    double getGrossSales() const;//return gross sales amount

    //keyword virtual signals intent to override
    virtual double earnings() const override;//calculate earnings
    virtual void print() const override;//print object
private:
    double grossSales;//gross weekly sales
    double commissionRate;//commission percentage
 };

#endif // COMMISSION_H
