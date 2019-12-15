#include"HourlyEmployee.h"//HourlyEmployee class definition

using namespace std;

HourlyEmployee::HourlyEmployee(const string &first, const string &last,
            const string &ssn,double a, int b)
            :Employee(first,last,ssn)
{
    setWage(a);
    setHours(b);
}//end HourlyEmployee constructor

void HourlyEmployee::setWage(double a)
{
    if(a>=0)
        wage=a;
    else
        {
            cerr<<"wage is wrong"<<endl;
            exit(0);
        }
}

double HourlyEmployee::getWage()const
{
    return wage;
}

void HourlyEmployee::setHours(int b)
{
    if(b>=0)
        hours=b;
    else
        {
            cerr<<"hours is wrong"<<endl;
            exit(0);
        }
}

int HourlyEmployee::getHours() const
{
    return hours;
}

double HourlyEmployee::earnings() const
{
    if(getHours()<=40)
        return getHours()*getWage();
    else
        return (40*getWage()+(getHours()-40)*getWage()*1.5);
}//end function earning

void HourlyEmployee::print()const
{
    cout << "HourlyEmployee: ";
    Employee::print();
    cout << "\nHourlyEmployee's wage: " << getWage()
    << " ; HourlyEmployee's hours: " << getHours() << endl;
}//end function print
