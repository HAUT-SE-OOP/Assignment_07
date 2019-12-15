#include <iostream>
#include <stdexcept>
#include "HourlyWorker.h"
using namespace std ;

HourlyWorker::HourlyWorker(const string &first,const string &last,const string &ssn, double h, double w)
  :Employee(first , last , ssn)
{
      sethours(h);
      setwage(w) ;
}
void HourlyWorker::setwage(double w)
{
    if(w>=0.0)
        wage=w;
    else
        throw invalid_argument("wage must be >= 0.0");
}
void HourlyWorker::sethours(double h)
{
    if(h>=0.0)
        hours=h;
    else
        throw invalid_argument("hours must be >= 0.0");
}
double HourlyWorker::getwage()const
{
    return wage;
}
double HourlyWorker::gethours()const
{
    return hours;
}
double HourlyWorker::earnings()const
{
    if (hours <=40)
    {
        return hours*wage ;
    }
    else
    {
        return (hours-40)*(1.5*wage)+40*wage ;
    }
}//计算时小于四十直接×    若大于四十  大于的那部分工资*1.5   小于的照旧
void HourlyWorker::print()const
{
    cout <<"hourly woker:";
    Employee::print();
    cout << "\nhours:" << gethours()
    <<"; wage: "<<getwage() ;
}
