//HourlyWorker.h
//HourlyWorker abstract base class
#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

#include <string>//c++ standard string class
#include "Employee.h"
using namespace std;

class HourlyWorker:public Employee
{
public:
    HourlyWorker(const string &,const string &,const string &,double ,double );//constructor
    virtual ~HourlyWorker(){}//virtual destructor
    void setWage(double );//set wage
    double getWage()const;//return wage
    void setHours(double );//set hours
    double getHours()const;//return hours
    virtual double earnings() override;//override virtual function earnings in Employee
    virtual void print() override;//print HourlyWorker's information
private:
    double wage;
    double hours;
};


#endif // HOURLYWORKER_H
