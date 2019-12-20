 #include <iostream>
 #include "HourlyEmployee.h"
 using namespace std;
 HourlyEmployee::HourlyEmployee(const string &first, const string &last,
    const string &ssn,double wage1,int hour)
    :Employee( first, last, ssn )
{
        if(wage1 > 0)
            wage = wage1;
        else
            throw invalid_argument( "wage must be >= 0.0" );
        if(hour > 0)
        {
            hours = hour;
        }
        else
            throw invalid_argument("hours mush be >= 0");
}
double HourlyEmployee::earnings() const
{
    if(hours <40)
        return wage*hours;
    else
        return wage*40+wage*(hours-40)*1.5;
}
void HourlyEmployee::print() const
 {
    cout << "salaried employee: ";
    Employee::print(); // reuse abstract base-class print function
 } // end function print

