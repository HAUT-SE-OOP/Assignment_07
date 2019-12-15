#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED

#include<iostream>
#include"Employee.h"
#include"SalariedEmployee.h"
#include<string.h>
using namespace std;
class SalariedEmployee : public Employee
{
public:
    SalariedEmployee( string,string,string,double);
    void setweeklySalary(double);
    double getweeklySalary();

    double earnings();
    void print();
private:
    double weeklySalary;
} ;

#endif // SALARIEDEMPLOYEE_H_INCLUDED
