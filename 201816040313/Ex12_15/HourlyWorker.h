#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED
#include "Employee.h"
#include <string>


class HourlyWorker:public Employee
{
public:
    HourlyWorker(const std::string &, const std::string &, const std::string &,double=0.0,double=0.0);//constructor
    virtual ~HourlyWorker(){}//destructor
    void setwage(double);
    double getwage()const;
    void sethours(double);
    double gethours()const;
    virtual void print()const;//print worker information
    virtual double earnings()const;//calculate wage
private:
    double wage;
    double hours;
};


#endif // HOURLYWORKER_H_INCLUDED
