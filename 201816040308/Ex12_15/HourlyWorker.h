
#include<string>
using namespace std;
#include "Employee.h"
class HourlyWorker : public Employee
{
public:
    HourlyWorker(string,string,string,double,double );
    void setwage(double);
    double getwage();
    void sethours(double);
    double gethours();
    double earnings();
    void print();
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double wage;
    double hours;
};
