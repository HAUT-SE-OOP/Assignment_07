#ifndef HOURLYWORKER_H_INCLUDED
#define HOURLYWORKER_H_INCLUDED
#include<iostream>
#include"Employee.h"
#include<string>
using namespace std;
class HourlyWorker :public Employee
{
public:
    HourlyWorker(const string &,const string &,const string &,double=0.0,double =0.0);
    void setwage(double);
    double getwage()const;
    void  sethour(double);
    double gethour()  const;
    double earnings() ;
    void print()  const;
private:
    double wage;
    double hour;


};


#endif // HOURLYWORKER_H_INCLUDED
