#include "HourlyWorker.h"
#include "Employee.h"
#include <string>
using namespace std;
HourlyWorker::HourlyWorker(const string &first, const string &last,
                           const string &ssn, int wage, int hours) : Employee(first, last, ssn),
                                                                     wage(wage), hours(hours)
{
}

double HourlyWorker::earnings() const
{
    int baseHour = min(hours, 40);
    int extraHour = max(0, hours - 40);
    return 1.5 * extraHour * wage + baseHour * wage;
}

void HourlyWorker::print() const
{
    cout << "hourlyWorker employee: ";
    Employee::print(); // reuse abstract base-class print function
    cout << "\nWage: " << getWage()<<"; Hours: "<<getHours();
}



void HourlyWorker::setHours(int hours) 
{
    this->hours = hours;
}

void HourlyWorker::setWage(int wage)
{
    this->wage = wage;
}

int HourlyWorker::getHours() const
{
    return hours;
}

int HourlyWorker::getWage() const
{
    return wage;
}