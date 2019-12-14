#ifndef HOURLY_H
#define HOURLY_H

#include<string>
#include"SalariedEmployee.h"
using namespace std;

class HourlyEmployee:public SalariedEmployee
{
public:
    HourlyEmployee(const string&,const string &,const string &,double=0.0,double=0.0);
    virtual ~HourlyEmployee(){};//vi

    void setwage(double);//时薪的set\get函数
    double getwage()const;

    void sethours(double);//小时的set\get函数
    double gethours()const;

    void setweeklysalary();//set weekly salary
    double getweeklysalary()const;//return weekly salary

    double earnings()const override;
    void print()const override;
private:
    double wage;//ʱн
    double hours;
};
#endif // HOURLY_H
