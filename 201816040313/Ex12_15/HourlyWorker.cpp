#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "HourlyWorker.h"
using namespace std;

HourlyWorker::HourlyWorker(const string &first, const string &last, const string &ssn,double wa,double ho)//constructor
:Employee(first,last,ssn)
{
    setwage(wa);
    sethours(ho);
}
void HourlyWorker::setwage(double wag)
{
    if(wag>0)
    {
        wage=wag;
    }
    else
    {
        throw invalid_argument("wag must be > 0");
    }
}
double HourlyWorker::getwage()const
{
    return wage;
}
void HourlyWorker::sethours(double hou)
{
    if(hou>=0)
    {
        hours=hou;
    }
    else
    {
        throw invalid_argument("hou must be >= 0 ");
    }
}
double HourlyWorker::gethours()const
{
    return hours;
}
void HourlyWorker::print()const//print worker information
{
     cout<<"huorly worker: ";
     Employee::print();
     cout<<"hourly wage: "<<getwage()
    <<"\nworking hours: "<<gethours();
}
double HourlyWorker::earnings()const//calculate wage
{
    if(gethours()>40)
    {
        double overtimePay;
        cout<<"overtime pay: ";
        cin>>overtimePay;
        return gethours()*getwage()+overtimePay;

    }
    return gethours()*getwage();
}
