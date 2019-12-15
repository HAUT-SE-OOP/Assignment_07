#include "Employee.h"
#include <string>

class SalariedEmployee :public Employee
{
public:
    SalariedEmployee(string ,string ,string ,double );
    void setWeeklySalary(double );
    double getWeeklySalary( );

    double earnings( ) override;
    void print( );
private:
    double weeklySalary;
};
