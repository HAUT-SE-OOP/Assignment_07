#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED
#include<iostream>
#include "Employee.h"


using namespace std;

class SalariedEmployee: public Employee
{
private:
    double WeeklySalary;
public:
    SalariedEmployee( const string &, const string &,
                         const string &, double = 0.0 );

    void setWeeklySalary( double  );
    double getWeeklySalary();

    virtual void earnings();

};


#endif // SALARIEDEMPLOYEE_H_INCLUDED
