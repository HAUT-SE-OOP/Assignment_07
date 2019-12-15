#ifndef SALARIED_H
#define SALARIED_H

#include <string>
#include "Employee.h"
using namespace std;
class SalariedEmployee:public Employee //definition of class SalariedEmployee
{
public:
    SalariedEmployee(const string &,const string &,const string &,double); //declare constructor of SalariedEmployee
    virtual ~SalariedEmployee(){}

    void setWeeklySalary(double); //declare function to setWeeklySalary
    double getWeeklyEmployee()const;

    virtual double earnings()const override; //declare function to earnings
    virtual void print()const override;
private:
    double weeklySalary; //data member weeklySalary
};
#endif // SALARIED_H
