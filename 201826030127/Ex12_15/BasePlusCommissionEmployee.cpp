#include<iostream>
using namespace std;
#include<stdexcept>
#include"BasePlusCommissionEmployee.h"

 BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate,double salary)
   : CommissionEmployee(first,last,ssn,sales,rate)
       {
           setbaseSalary(salary);
       }
    void BasePlusCommissionEmployee::setbaseSalary(double  salary)
    {
      if(salary>=0.0)
            baseSalary=salary;
      else
        throw invalid_argument("base salary must be >=0.0");
    }
    double BasePlusCommissionEmployee::getbaseSalary() const
    {
        return baseSalary;
    }
    double BasePlusCommissionEmployee::earnings()
    {
        return getbaseSalary()+CommissionEmployee::earnings();
    }
    void BasePlusCommissionEmployee::print() const
    {
        cout<<"base-salaried ";
        CommissionEmployee::print();
        cout<<"; base salary"<<getbaseSalary();

    }
