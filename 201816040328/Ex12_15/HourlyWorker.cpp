#include <iostream>
#include <stdexcept>
#include"Employee.h"
#include "HourlyWorker.h"
using namespace std;

HourlyWorker::HourlyWorker(const string &first,const string &last,const string &ssn,
					double a,double b)
	: Employee(first,last,ssn)
{
	wage=a;
	hour=b;
}

double HourlyWorker::earnings()const
{
    if(hour>=40.0)
        return 40.0*wage+(hour-40)*(1.5*wage);
    else
        return hour*wage;
}
void HourlyWorker::print()const
{
    cout<<"HourlyWorker:";
    Employee::print();
    cout<<"\nHourlyWorker wage is:"<<wage<<"\nHourlyWorker hour is:"<<hour;
}
