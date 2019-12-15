#include<bits/stdc++.h>
using namespace std;
#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee( const string &a, const string &b, const string &c, int d, int e )//constructor function
    :Employee( a, b, c )
{
    setHours( d );
    setWage( e );
}//end constructor function

//set hours
void HourlyEmployee::setHours( int h )
{
    if(h>=0)//judge if h >= 0
        hours = h;
    else
        throw invalid_argument( "hours must be >= 0" );
}//end function

//get hours
int HourlyEmployee::getHours()const
{
    return hours;
}//end function

//set wage
void HourlyEmployee::setWage( int w )
{
    if( w>=0 )//judge if w >= 0
        wage = w;
    else
        throw invalid_argument( "wage must be >= 0" );
}//end function

//get wage
int HourlyEmployee::getWage()const
{
    return wage;
}//end function

//function to calculate earnings
double HourlyEmployee::earnings()const
{
    if( getHours()<=40 )//judge if hours <= 40
        return getHours()*getWage();
    else
        return getWage()*(40+1.5*(getHours()-40));
}//end function

//function to print object
void HourlyEmployee::print()const
{
    cout<<"hourly employee: ";
    Employee::print();
    cout<<"hours: "<<getHours()<<"; wage: "<<getWage()<<endl;
}//end function
