#include<iostream>
#include"Employee.h"
#include"HourlyWorker.h"
#include<string>
using namespace std;
HourlyWorker::HourlyWorker(string f,string l,string s,double w,double h)
                            :Employee(f,l,s)
{
    setwage(w);
    sethours(h);
}
void HourlyWorker::setwage(double w)
{
    if(w<0)
        wage=0;
    else
        wage=w;
}
double HourlyWorker::getwage()
{   return wage;    }
void HourlyWorker::sethours(double h)
{
    if(h<0)
        hours=0;
    else
        hours=h;
}
double HourlyWorker::gethours()
{   return hours;   }
double HourlyWorker::earnings()
{
    if(hours<40)
        earn=wage*hours;
    else
        earn=wage*hours+0.5*wage*(hours-40);
    return earn;
}
void HourlyWorker::print()
{
    cout<<"姓名："<<getFirstName()<<" "<<getLastName()<<"\n"
        <<"身份证号："<<getSocialSecurityNumber()<<"\n"
        <<"工资："<<earnings()<<endl<<"\n";
}
