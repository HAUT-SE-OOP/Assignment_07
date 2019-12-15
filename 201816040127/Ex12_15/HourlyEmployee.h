#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED
#include <string>//C++ standard string class
#include "Employee.h"
class HourlyEmployee : public Employee
{
public:
    HourlyEmployee( const std::string &, const std::string &,
            const std::string &,double = 0.0,double =0.0);
    virtual ~HourlyEmployee(){}//virtual destructor

    void setWage( double );//set weekly salary
    double getWage() const;//return weekly salary

    void setHours( double );//set weekly salary
    double getHours() const;//return weekly salary

    virtual double earnings() const override;//calculate earnings
    virtual void print() const override;//print object
private:
    double wageN;//salary per week
    double hoursN;

};//end class HourlyEmployee



#endif // HOURLYEMPLOYEE_H_INCLUDED
