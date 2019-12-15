//
// Created by Administrator on 2019/12/13.
//

#include <iostream>
#include <string>
#include "HourlyEmployee.h"
using namespace std;
//constructor
HourlyEmployee::HourlyEmployee(const string &first,const string &last,const string &ssn,double Wage,double Hours)
        :Employee(first,last,ssn)
{
    setWage(Wage);
    setHours(Hours);
}

void HourlyEmployee::setWage(double wag) {wage=wag;}

double HourlyEmployee::getWage() const {return wage;}

void HourlyEmployee::setHours(double hour)
{
    hours=hour;
}
double HourlyEmployee::getHours()const
{
    return hours;
}

double HourlyEmployee::earnings()const
{
    return getWage()*getHours();
}//end function earning
//print SalariedEmployee's information
void HourlyEmployee::print()const
{
    cout<<"Hourly Employee: ";
    Employee::print();
    cout<<"\nwage:"<<getWage()<<"\nhours:"<<getHours();
    //cout<<"\nweekly salary: "<<earnings();
}//end function print