#include <iostream>
#include <stdexcept>
#include "HourlyEmployee.h"

using namespace std;

//constructor
HourlyEmployee::HourlyEmployee(
   const string &first, const string &last, const string &ssn,
   const double Wage,const double Hours)
: Employee( first, last, ssn )
{
    setwage( Wage );
    sethours( Hours );
}//end HourlyEmployee constructor

void HourlyEmployee::setwage(double Wage)
{
    if( Wage >= 0.0)
        wage = Wage;
    else
        throw invalid_argument("wage must be > 0.0");
}

double HourlyEmployee::getwage()
{
    return wage;
}

void HourlyEmployee::sethours(Hours)
{
    if( Hours >= 0.0)
        hours = Hours;
    else
        throw invalid_argument("hours must be > 0.0");
}

double HourlyEmployee::gethours()
{
    return hours;
}

double HourlyEmployee::earnings() const
{
    if(gethous()>=40)
    return gethours()*getwage();
    else
    return 40*getwages() + (gethours()-40)*getwages()*1.5;
}

void HourlyEmployee::print() const
{
    cout<<"hourly employee: ";
    Employee::print();
    cout<<" wage: "<<getwage()<< "hours: "<< gethours()<<endl;
}
