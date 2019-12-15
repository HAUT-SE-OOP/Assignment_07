// Exercise 12.15 Solution:CommissionEmployee.cpp
//CommissionEmployee class member-function definitions.
#include<iostream>
#include<stdexcept>
#include"Employee.h"
#include"CommissionEmpolyee.h"
using namespace std;

//constructor
CommissionEmployee::CommissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate)
    :Employee(first,last,ssn)
{
    setGrossSales(sales);
    setCommissionRate( rate);
}

//set gross sales amount
void CommissionEmployee::setGrossSales(double sales)
{
    if (sales >= 0.0)
        grossSales = sales;
    else
        throw invalid_argument("Gross sales must be >= 0.0");
}

//return gross sales amount
double CommissionEmployee::getGrossSales()const
{
    return grossSales;
}

//set commission rate
void CommissionEmployee::setCommissionRate( double rate)
{
    if (rate >= 0.0)
        commissionRate=rate;
    else
        throw invalid_argument("Commission Rate must be >= 0.0");
}

//return commission rate
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}

//calculate earnings;override pure virtual function earnings in Employee
double CommissionEmployee::earnings() const
{
    return getCommissionRate()*getGrossSales();
}

//print SalaryEmployee's information
void CommissionEmployee::print() const
{
    cout << "commission employee: ";
    Employee::print();//code reuse
    cout << "\ngross sales: " <<  getGrossSales()
      <<"; commission rate: " << getCommissionRate();
}
