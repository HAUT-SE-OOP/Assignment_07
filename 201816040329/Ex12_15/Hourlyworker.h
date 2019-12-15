#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED

#include"Employee.h"

using namespace std;

class HourlyEmployee: public Employee
{
public:
    HourlyEmployee( const std::string &, const std::string &,
            const std::string &, double = 0.0, double = 0.0 );

    void setwage( double );
    double getwage();

    void sethour( double ); // set piece
    double gethour(); // return piece

    virtual void print();
    virtual double earnings()const;
private:

    double wage;
    double hours;
};

