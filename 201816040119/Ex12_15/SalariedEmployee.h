#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED
#include<string>
#include"Employee.h"
class SalariedEmployee:public Employee
{
public:
    SalariedEmployee(const std::string &,const std::string &,const std::string &,double=0.0);
    virtual ~SalariedEmployee(){};
    void setWeeklySalary(double);
    double getWeeklySalary()const;
    virtual double earning()const ;
    virtual void print()const ;
private:
   double weeklySalary;
};


#endif // SALARIEDEMPLOYEE_H_INCLUDED
