
#include <string>
#include "Employee.h"
using namespace std;
class CommissionEmployee:public Employee
{
public:
    CommissionEmployee(const string &,const string &,const string &,double=0.0,double=0.0);
virtual ~CommissionEmployee(){}//virtual destructor
    void setCommissionRate(double);//set commission rate
    double getCommissionRate()const;//return commission rate
    void setGrossSales(double);//set gross sales amount
    double getGrossSales()const;//return gross sales amount
    virtual double earnings()const override;//calculate earning
    virtual void print()const override;//print object
private:
    double grossSales;//gross weekly sales
    double commissionRate;//commission percentage
};//end class CommissionEmployee



