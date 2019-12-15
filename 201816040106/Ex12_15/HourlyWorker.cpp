#include"HourlyWorker.h"
#include<iostream>
using namespace std;
HourlyWorker::HourlyWorker(const string &first,const string &last,const string &ssn,double w,int h)
  :Employee(first,last,ssn),wage(w),hours(h){}
double HourlyWorker::earnings() const
{   
    if(hours>40) return (hours-40)*1.5*wage+40*wage;
    else return hours*wage;
}
void HourlyWorker::print() const{
    cout<<"hourly worker: ";
	Employee::print();
}
