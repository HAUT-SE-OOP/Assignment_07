#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED

#include"Employee.h"

class HourlyEmployee: public Employee//Employee class definition
{
public:
    HourlyEmployee(const string &first, const string &last,
                   const string &ssn,double = 0, int = 0);
    virtual ~HourlyEmployee(){}//virtual destructor

    void setWage(double);
    double getWage() const;
    void setHours(int);
    int getHours() const;

    //keyword virtual signals intent to override
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double wage;
    int hours;
};

#endif // HOURLYEMPLOYEE_H_INCLUDED
