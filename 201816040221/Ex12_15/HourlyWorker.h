#ifndef HOURLYWORKER_H

#define  HOURLYWORKER_H
#include <string>
#include "Employee.h"
class HourlyWorker:public Employee
{
    pubilc:
        HourlyWorker(const std::string &,const std::string &,const std::sstring &,double =0.0);
        virtual ~HourlyWorker(){}
        void setHourlyWorker(double);
        double getHourlyWorker();
        virtual double earnings() const override;
        virtual void print() const override;
        void setwage(double);
        void hours(double);
    private:
        double wage;
        double hours;
};
#endif // HOURLYWORKER_H
