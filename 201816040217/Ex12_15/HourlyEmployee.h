#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED
#include"Employee.h"


class HourlyEmployee:public Employee
{
public:
     HourlyEmployee(const std::string &,const std::string &,
             const std:: string &,double=0.0,double =0.0);
    virtual ~HourlyEmployee(){};


    void setWage(double);
    double getWage()const;


    void setHour(double);
    double getHour()const;

    virtual double earnings() const override;
    virtual void print()const override;
private:
    double wage,hour;



};


#endif // HOURLYEMPLOYEE_H_INCLUDED
