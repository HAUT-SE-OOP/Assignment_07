#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED

#include <string>
#include "Employee.h"

class HourlyEmployee : public Employee
{
public:
    HourlyEmployee (  const std::string & , const std::string & , const std::string & , double = 0.0 , double = 0.0 ) ;
    virtual ~HourlyEmployee() { };
    void setWage( double );
    double getWage() const;

    void setHours( double );
    double getHours() const;

    virtual double earnings() const override;
    virtual void print() const override;
private:
    double wage;
    double hours;
};


#endif // HOURLYEMPLOYEE_H_INCLUDED
