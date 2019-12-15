#ifndef COMMISSION_H
#define COMMISSION_H
#include "Employee.h"
#include <string>
using namespace std;

class CommissionEmployee:public Employee
{
public:
    CommissionEmployee(string ,string ,string ,double ,double );

    void setGrossSales(double );
    double getGrossSales( );

    void setCommissionRate(double );
    double getCommissionRate( );

    double earnings( ) override;
    void print();

private:
    double grossSales;
    double commissionRate;
};

#endif
