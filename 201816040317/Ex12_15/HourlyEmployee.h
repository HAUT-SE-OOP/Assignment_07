// Assignment_07: HourlyEmployee.h
// HourlyEmployee class definition
#ifndef HOURLY_H
#define HOURLY_H
#include <string>
#include "Employee.h"
using namespace std;

class HourlyEmployee: public Employee
{
public:
    HourlyEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );
    virtual ~HourlyEmployee() {}

    void setWage( double ); // set wage amount
    double getWage(); // return wage amount

    void setHours( double ); // set piece
    double getHours() ; // return piece

    virtual double earnings() override;
    virtual void print() override; // print object
private:
    double wage;
    double hours;
};

#endif // HOURLY_H
