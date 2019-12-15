#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED

#include "Employee.h"
class HourlyWorker:public Employee
{
public:
    HourlyWorker(const string &, const string &, const string &,const double =0.0 ,const double =0.0);
    virtual ~HourlyWorker(){}
    void setWage(double );//设置wage
    double getWage() const;//返回wage
    void setHours(double );//设置hours
    double getHours() const;//返回hours
    virtual double earnings() const;//计算工资
    virtual void print() ;//输出信息
private:
    double wage;//雇员时薪
    double hours;//工作小时数
};
#endif
// PIECEWORKER_H_INCLUDED
