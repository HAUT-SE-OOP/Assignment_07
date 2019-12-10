#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H
#include "Employee.h"
using namespace std;

class HourlyWorker: public Employee
{
public:
    HourlyWorker(string , string ,string ,double ,double );
    void setWage(double );
    double getWage( );

    void setHours(double );
    double getHours( );

    double earnings( ) override;
    void print();
private:
    double wage;//ʱн
    double hours;

};
#endif
