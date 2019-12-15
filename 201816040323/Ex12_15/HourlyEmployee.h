#ifndef HOURLYEMPLOYEE
#define HOURLYEMPLOYEE
#include <string> // C++ standard string class
using namespace std;
#include "Employee.h"

class HourlyEmployee : public Employee
{
public:
    HourlyEmployee(const string &, const string &,const string &,double =0.0,double = 0.0);
    virtual ~HourlyEmployee() {}

    void setWage(double);// set wage amount
    double getWage()const;// return wage amount

    void setHours(double);// set piece
    double getHours()const;// return piece

    virtual double earnings() const override;// calculate earnings
    virtual void print() const override; // print HourlyEmployee object
private:
    double wage;
    double hours;
};

#endif // HOURLYEMPLOYEE

