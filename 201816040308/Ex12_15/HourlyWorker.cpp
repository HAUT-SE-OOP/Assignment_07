#include<iostream>
#include"HourlyWorker.h"
using namespace std;

HourlyWorker::HourlyWorker(string first,string last,string ssn,double a,double b)
    :Employee(first,last,ssn),wage(a),hours(b)
{

}
void HourlyWorker::setwage(double a)
{
    wage = a;
}
double HourlyWorker::getwage()
{
    return wage;
}
void HourlyWorker::sethours(double a)
{
    hours = a;
}
double HourlyWorker::gethours()
{
    return hours;
}
double HourlyWorker::earnings()
{
    if(gethours()<=40)
        return getwage()*gethours();
    else
        return getwage()*40+getwage()*1.5*(gethours()-40);
}
void HourlyWorker::print()
{
    cout<<"HourlyWorker employee:";
    Employee::print();
    cout<<"\nwage:"<<getwage()<<";hours:"<<gethours();
}
