#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED
#include<string>
#include"Employee.h"
using namespace std;
class HourlyWorker:public Employee
{
    public:
    HourlyWorker(const string &,const string &,const string &,double=0.0,double=0.0);
    ~HourlyWorker(){}
    /*时薪和工作小时数的set和get函数*/
    void setWage(double);
    double getWage()const;
    void setHours(double);
    double getHours()const;
    double earnings()const;
    void print()const;
private:
    double wage;//时薪
    double hours;//工作小时数
};

#endif // HOURLYWORKER_H_INCLUDED
