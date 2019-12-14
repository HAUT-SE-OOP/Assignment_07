#pragma once 
#include "Employee.h"
#include <iostream>
using namespace std;
class HourlyWorker : public Employee
{
public:
    HourlyWorker(const std::string &, const std::string &,
                 const std::string &, int = 0, int = 0);
    double earnings() const;
    void print() const;
    void setHours(int hours);
    int getHours() const;
    void setWage(int wage);
    int getWage() const;

private:
    int hours;
    int wage;
};
