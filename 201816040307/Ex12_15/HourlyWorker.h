
#include<string>
using namespace std;
#include "Employee.h"
class HourlyWorker : public Employee
{
public:
    HourlyWorker(string,string,string,double,double );
    void setWage(double);
    double getWage()const;

    void setHours(double);
    double getHours()const;

    void print();
    double earnings();

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double wage;
    double hour;
};
