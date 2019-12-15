
#include <string>
#include "Employee.h"

using namespace std;
class HourlyWorker:public Employee
{
public :
    HourlyWorker(const string &,const string &,const string &,double=0.00,int=0);
    virtual double earnings();
    virtual void print()const override;
private:
    double wage;
    int hours;
};


