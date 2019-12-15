#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED
#include <string>
#include "Empolyee.h"

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee( const std::string &,const std::string &,const std::string &,double = 0.0 );
    virtual ~SalariedEmployee() { };

    void setWeeklySalary( double );
    double getWeeklySalary() const;

    virtual double earnings() ;
    virtual void print() ;
private:
    double weeklySalary;
};


#endif // SALARIEDEMPLOYEE_H_INCLUDED
