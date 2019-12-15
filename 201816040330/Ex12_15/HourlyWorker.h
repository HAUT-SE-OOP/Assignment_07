#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED

#include<iostream>
#include <string>

using namespace std;

class HourlyWorker
{
public:
    explicit HourlyWorker(double,int);
    double earnings(double,int);
    void setHours(int);
    int getHours();
private:
    double wage;
    int hours;
};

#endif // HOURLYEMPLOYEE_H_INCLUDED
