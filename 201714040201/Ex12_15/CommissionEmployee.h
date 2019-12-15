//CommissionEmployee.h
//CommissionEmployee class derived from Employee
#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include <string>
#include "Employee.h"//Employee class definition

using namespace std;

class CommissionEmployee:public Employee
{
public:
    CommissionEmployee(const string &,const string &,const string &,double,double);//constructor
    virtual ~CommissionEmployee(){}//virtual destructor
    void setGrossSales(double );//set grossSales
    double getGrossSales()const;//return grossSales
    void setCommissionRate(double );//set commissionRate
    double getCommissionRate()const;//return commissionRate
    virtual double earnings() override;//calculate earnings
    virtual void print() override;//print object
private:
    double grossSales;//gross weekly sales
    double commissionRate;//commission percentage
};//end class CommissionEmployee

#endif // COMMISSIONEMPLOYEE_H
