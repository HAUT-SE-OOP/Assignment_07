//HourlyWorker.h
#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED
#include <string>
#include "Employee.h"
class HourlyWorker:public Employee
{
public:
    HourlyWorker(const std::string &,const std::string &,const std::string &,double,double);
    virtual~HourlyWorker(){}
    void setWage(double);
    double getWage()const;
    void setHours(double);
    double getHours()const;
    double earnings() const override;
private:
    double wage;
    double hours;
};


#endif // HOURLYWORKER_H_INCLUDED
