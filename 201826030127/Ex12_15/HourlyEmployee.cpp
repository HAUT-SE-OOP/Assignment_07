#include<iostream>
using namespace std;
#include"HourlyWorker.h"
#include<stdexcept>
HourlyWorker::HourlyWorker(const string &first,const string &last,const string &ssn,double w,double h )
   : Employee(first,last,ssn)
       {
           setwage(w);
           sethour(h);
       }
    void HourlyWorker::setwage(double w)
    {
        if(w>=0.0)
            wage=w;
        else
            throw invalid_argument("awage must be >=0.0");

    }
    double HourlyWorker::getwage()const
    {
        return wage;

    }
    void  HourlyWorker::sethour(double h)
    {
        if(h>0.0)
        hour =h;
        else
            throw invalid_argument("hour must be >=0.0");

    }
    double HourlyWorker::gethour()  const
    {
        return hour;
    }
    double HourlyWorker::earnings()
    {
        double temp;
        if(hour>40)
        temp=40*getwage()+(gethour()-40)*1.5*getwage();
        else
            temp=getwage()*gethour();
        return temp;

    }
    void  HourlyWorker::print()  const
{
    cout<<"Hourly Employee: ";
    Employee::print();
    cout<<"hourly worker Earnings is ";
    cout<<earnings();
}
