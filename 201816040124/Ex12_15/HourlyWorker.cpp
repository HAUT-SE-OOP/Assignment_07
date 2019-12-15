#include <iostream>
#include<stdexcept>
#include"HourlyWorker.h"
using namespace std;
HourlyWorker::HourlyWorker(   const string &first, const string &last, const string &ssn,
double w, double hour )//初始化数据成员
:Employee(first,last,ssn)
{
    setWage(w);
    setHours(hour);
}
void HourlyWorker::setWage(double w)//判断及改变时薪
{
    if(w>=0.0)
        wage=w;
    else
        throw invalid_argument("Wage must be>=0.0");
}
double HourlyWorker::getWage()const//返回时薪
{
    return wage;
}
void HourlyWorker::setHours(double hour)//判断及改变工作小时数
{
    if(hour>=0.0)
        hours=hour;
    else
        throw invalid_argument("Hours must be>=0.0");
}
double HourlyWorker::getHours()const//返回工作小时数
{
    return hours;
}
double HourlyWorker::earnings()const//分情况计算工资
{
    if(getHours()<=40)
        return getWage()*getHours();
    else
        return getWage()*40+1.5*getWage()*(getHours()-40);
}
void HourlyWorker::print()const//输出信息
{
    cout<<"hourly worker:";
    Employee::print();
    cout<<"\nwage:"<<getWage()<<"\nhours:"<<getHours();
}
