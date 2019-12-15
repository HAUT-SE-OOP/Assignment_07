#include <iostream>
#include <stdexcept>
#include "HourlyWorker.h"
#include "Employee.h"


HourlyWorker::HourlyWorker(const String &first,const string &last,const string &sn,double hours,double wage)
    :Employee(first,last,ssn);
    {
        setwage(w);
        sethours(h);
    }
void HourlyWorker::setwage(double w)
{


    setwage=w;

}
double HourlyWorker::getwage()
{
    return wage;
}
void HourlyWorker::sethours(double h)
{

    sethours=h;
}
double HourlyWorker::gethours()
{
    return hours;
}
double HourlyWorker::earnings() const override
{
    if(gethour>40)
        earnings=getwage()*1.5*(hethour()-40)+getwage()*gethours()
    return earnings;

}
