#ifndef EMPLOYEE_H1
#define EMPLOYEE_H1
#include <string>
#include "Employee.h"
using namespace std;

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee(const string &, const string &,const string &,double =0.0);
    virtual ~SalariedEmployee() {}

    void setWeeklySalary(double);
    double getWeeklySalary()const;
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double weeklySalary;//周薪
};
#endif
