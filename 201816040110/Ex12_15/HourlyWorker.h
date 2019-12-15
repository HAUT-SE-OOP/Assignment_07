#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED
#include "Employee.h"
class HourlyWorker : public Employee
{
public:
    HourlyWorker( const std::string & , const std::string & , const std::string & , double = 0.0 , double = 0.0 );
    virtual double  earnings()const override;
    virtual void print() const override;
private:
    double wage;
    double hours;
};




#endif // HOURLYWORKER_H_INCLUDED
