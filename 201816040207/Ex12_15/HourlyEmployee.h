#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include<string>
#include"Employee.h"

using namespace std;


class HourlyEmployee : public Employee
{
public:

    HourlyEmployee(const string &,const string &,
        const string &, double = 0.0,double = 0.0);
    void setwage(double );
    double getwage();

    void sethours(double );
    double gethours();

    virtual double earnings()const override;//pure virtual
    virtual void print()const override;

private:
    double wage;
    double hours;

};


#endif // PIECEWORKER_H
