// Assignment_07: SalariedEmployee.h
// SalariedEmployee class definition.
#ifndef SALARIED_H
#define SALARIED_H

#include <string> // program uses C++ standard string class
#include "Employee.h"

// SalariedEmployee class definition
class SalariedEmployee: public Employee
{
public:
    SalariedEmployee( const string &, const string &,
            const string &, double = 0 );// constructor
    virtual ~SalariedEmployee() {}; // virtual destructor

    // set and get
    void setWeeklySalary( double );
    double getWeeklySalary() const;

    // virtual function
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double weeklySalary;
};

#endif // SALARIED_H
