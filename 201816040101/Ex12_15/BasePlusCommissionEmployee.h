#include "CommissionEmployee.h"

class BasePlusCommissionEmployee:public CommissionEmployee
{
public :
    BasePlusCommissionEmployee(string , string ,string ,double ,double ,double);
    void setBaseSalary(double );
    double getBaseSalary( );

    double earnings( ) override;
    void print();
private:
    double baseSalary;
};
