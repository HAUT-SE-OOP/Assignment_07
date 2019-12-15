#ifndef SALARIESEMPLOYEE_H_INCLUDED
#define SALARIESEMPLOYEE_H_INCLUDED

#include <string>
#include "Employee.h"
using namespace std;

// SalariedEmployee class definition
class SalariedEmployee : public Employee
{

public:

    SalariedEmployee(const string &, const string &,const string &,double =0.0);

    virtual ~SalariedEmployee() {}
    // set and get
    void setWeeklySalary(double);

    double getWeeklySalary()const;

    // virtual function
    virtual double earnings() const override;

    virtual void print() const override;

private:
    double weeklySalary;
};

#endif // SALARIESEMPLOYEE_H_INCLUDED
