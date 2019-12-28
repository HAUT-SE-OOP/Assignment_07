#include "Employee.h"
#include <string.h>
using namespace std;
class HourlyEmployee: public Employee
{
public:
    HourlyEmployee (string,string,string,double,double);
    virtual double earnings() const;
    void setWage(double);
    double getWage()const;
    void setHours(double);
    double getHours()const;
private:
    double wage;
    double hours;
};
