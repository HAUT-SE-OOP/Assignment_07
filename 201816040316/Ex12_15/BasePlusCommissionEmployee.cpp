#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
using namespace std;

BasePlusCommissionEmployee::BaseP1usCommissionEmployee(const string &first, const string &last, const string &ssn,double sales, double rate, double salary):ComissionEmployee( first, last, ssn, sales, rate )
{
    setBaseSalary( salary ); 
}
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
    if ( salary >= 0.0 )
        baseSalary = salary;
    else
        throw invalid argument( "Salary must be >= 0.0" );
} 
double BasePlusCommissionEmp1oyee::getBaseSalary() const
{
    return baseSalary;
} 
double BasePlusCommissionEmployee::earnings()const
{
    return getBaseSalary() + CommissionEmployee: earnings() ;
}

void BasePlusComnissionEmployee::print() const
{
    cout<<"base-salaried ";
    CommissionEmployee::print();
    cout<<"; base salary:"<<getBaseSalary();
}
