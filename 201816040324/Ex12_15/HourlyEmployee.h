#ifndef EMPLOYEE_H3
#define EMPLOYEE_H3
#include <string>
#include "Employee.h"
using namespace std ;
class HourlyWorker : public Employee
{
public:

     HourlyWorker (const string &, const string &, const string &, double =0.0, double =0.0 ) ;
    virtual ~ HourlyWorker() {}
    void setwage  (double) ;
    double getwage  ()const ;
    void sethours (double) ;
    double gethours () const ;
    virtual double earnings() const override ;
    virtual void print () const override  ;
private :
    double wage ;//时薪
    double hours ;//小时
};
#endif
