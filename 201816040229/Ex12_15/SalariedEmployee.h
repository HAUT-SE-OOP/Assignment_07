// SalariedEmployee.h
#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED
#include <string> // C++ standard string class
#include "Employee.h"// Employee class definition
class SalariedEmployee : public Employee
{
public:
    SalariedEmployee( const std::string &, const std::string &,
     const std::string &, double = 0.0 );
     virtual ~SalariedEmployee(){ }// virtual destructor
     void setWeeklySalary( double );// set weekly salary
     double getWeeklySalary() const; // return weekly salary
     virtual double earnings()const override;
     virtual void print()const override;
private:
    double weeklySalary;
};// keyword virtual signals intent to override

#endif // SALARIEDEMPLOYEE_H_INCLUDED
