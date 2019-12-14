#include <iostream>
#include <stdexcept>
#include "HourlyEmployee.h"

using namespace std;
//constructor
HourlyEmployee::HourlyEmployee(const string &first,const string &last,const string &ssn,double wag,double hour)
:SalariedEmployee(first,last,ssn)
{
    setwage(wag);
    sethours(hour);
}
void HourlyEmployee::setweeklysalary()//setweeklysalary函数
{
    if(gethours()>40)
        SalariedEmployee::setweeklysalary(40*getwage()+(gethours()-40)*getwage()*1.5) ;
    else
        SalariedEmployee::setweeklysalary(getwage()*gethours()) ;
}//end function setweeklysalary

//return salary
double HourlyEmployee::getweeklysalary()const//getweeklysalary函数
{
    return SalariedEmployee::getweeklysalary();
}//end function getweeklysalary
void HourlyEmployee::setwage(double wag)//时薪的set函数
{
    wage=wag;
}
double HourlyEmployee::getwage()const//时薪的get函数
{
    return wage;
}

void HourlyEmployee::sethours(double hour)
{
    hours=hour;
    setweeklysalary();
}
double HourlyEmployee::gethours()const
{
    return hours;
}

double HourlyEmployee::earnings()const
{
    return getweeklysalary();
}//end function earning
//print SalariedEmployee's information
void HourlyEmployee::print()const
{
    cout<<"Hourly Employee: ";
    SalariedEmployee::print();
    cout<<"\nwage:"<<getwage()<<"\nhours:"<<gethours();
    //cout<<"\nweekly salary: "<<earnings();
}//end function print
