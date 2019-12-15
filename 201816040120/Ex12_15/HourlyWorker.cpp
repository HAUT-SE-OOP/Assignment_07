#include <iostream>
#include "HourlyWorker.h"
using namespace std;

HourlyWorker::HourlyWorker(const string &first, const string &last , const string &ssn,
                            double wage, double hours)
            :Employee(first,last,ssn)
            {
                setHours(hours);
                setWage(wage);
            }
double HourlyWorker::earnings() const
{
    if(getHours()<=40)
        return getWage() * getHours();
    else
        return getWage() * 40 + getWage() * 1.5 * (getHours()-40);
}
void HourlyWorker::print() const
{
    cout << "Hourly worker employee: ";
    Employee::print();
    cout <<"; \nHourly worker wage:"<<getWage()
    <<"; Hourly worker hour :"<<getHours();
}
void HourlyWorker::setWage(double wage)
{
    this -> wage = wage;
}
double HourlyWorker::getWage() const
{
    return wage;
}
void HourlyWorker::setHours(double hours)
{
    this -> hours = hours;
}
double HourlyWorker::getHours() const
{
    return hours;
}
