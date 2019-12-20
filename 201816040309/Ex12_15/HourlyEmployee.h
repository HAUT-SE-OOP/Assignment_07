// Fig. 12.9: Employee.h
// Employee abstract base class.
#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "Employee.h"
#include <string> // C++ standard string class
class HourlyEmployee : public Employee
{
 public:
    HourlyEmployee(const std::string &first, const std::string &last,
 const std::string &ssn,double wage1,int hour);
    double earnings() const override;
    virtual void print() const override;
 private:
     double wage;
     int hours;

}; // end class Employee

#endif // HOURLYEMPLOYEE_H
