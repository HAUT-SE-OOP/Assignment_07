//HourlyWorker.cpp
#include <iostream>
#include <string>
#include "HourlyWorker.h"
using namespace std;

//constructor
HourlyWorker::HourlyWorker(const string &first,const string &last,const string &ssn,double Wage,double Hours)
   :Employee(first,last,ssn)
{
    wage=Wage;
    hours=Hours;
}//end HourlyWorker constructor

double HourlyWorker::earnings()const
{
    if(hours>40)
        return wage*40+1.5*wage*(hours-40);
    else
        return wage*hours;
}

void HourlyWorker::print()const
{
    Employee::print();
    cout<<"earning is :$"<<earnings();
}
