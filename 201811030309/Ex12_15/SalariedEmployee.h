#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED
#include "Employee.h"

using namespace std;

class SalariedEmployee : public Employee
{
public:
    /*initializing the firstname, lastname, socialSecurityNumber, weeklySalary*/
    SalariedEmployee(const string &, const string &, const string &, double=0.0);
    /* set and get the weeklySalary*/
    void setWeeklySalary(double);
    double getWeeklySalary() const;
    /* Redefine pure virtual functions and virtual functions*/
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double weeklySalary;
};


#endif // SALARIEDEMPLOYEE_H_INCLUDED
