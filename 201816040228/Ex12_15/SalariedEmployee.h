#ifndef SALARIED_H
#define SALARIED_H

#include "Employee.h"
#include <string>
using namespace std;

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee( const string &, const string & , const string & , double=0.0);
    virtual ~SalariedEmployee() {}//virtual destructor

    void setWeeklySalary( double );
    double getWeeklySalary() const;

    virtual double earnings() const override;
    virtual void print() const override;

private:
    double weeklySalary;//weekly salary

};

#endif // SALARIED_H
