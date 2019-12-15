#include <string>
#include "Employee.h"
using namespace std;

class HourlyWorker: public Employee
{
public:
    HourlyWorker(string,string,string,double = 0.0,double =0.0);
    virtual ~ HourlyWorker() {}

    void setSalary(double);
    double getSalary() const;

    void setTime(double);
    double getTime() const;

    virtual double earnings();
    virtual void print();
private:
    double wage;
    double hours;
};
