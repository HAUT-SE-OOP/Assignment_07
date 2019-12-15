#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED

#include <string>//C++ standard string class
#include "Employee.h"
using namespace std;

class HourlyEmployee: public Employee
{
public:
    HourlyEmployee( const string &, const string &, const string &,
                       double = 0.0, double = 0.0 );
    virtual ~HourlyEmployee() {} // virtual destructor
    void setwage(double);
    double getwage();

    void sethours(double);
    double gethours();
    virtual double earnings() const override;//calculate earnings
    virtual void print() const override; //print object
private:
    double hours;
    double wage;
#endif // HOURLYEMPLOYEE_H_INCLUDED
