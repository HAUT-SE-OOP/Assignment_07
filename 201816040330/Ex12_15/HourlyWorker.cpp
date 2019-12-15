#include<iostream>
#include <string>
#include "HourlyWorker.h"

using namespace std;

HourlyWorker::HourlyWorker(double w,int h)
{
    wage=w;
    setHours(h);
}

void HourlyWorker::setHours(int h)
{
    hours=h;

}
int HourlyWorker::getHours()
{
    return hours;
}

double HourlyWorker::earnings(double w,int h)
{
    if(h>40)
        wage=1.5*w;
        else
            wage=w;
    return wage*h;
}
