//HourlyEmployee.h
#ifndef HOURLY_H
#define HOURLY_H
#include"Employee.h"

class HourlyEmployee : public Employee
{
public:
    HourlyEmployee(const string &first, const string &last, const string &ssn,double = 0.0, int = 0);
    virtual ~HourlyEmployee() { }
    void setHourlyWage(double );
    double getHourlyWage() const;
    void setHourlyHours(int );
    int getHourlyHours() const;
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double Wage;  //salary of each hour
    int Hours;    //work hours
};
#endif // HOURLY_H
