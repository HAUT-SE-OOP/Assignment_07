#ifndef HOURLY_H
#define HOURLY_H
#include<bits/stdc++.h>
#include"Employee.h"
using namespace std;

class HourlyWorker:public Employee
{
    private:
        double wage;
     double hours;
public:
    HourlyWorker(string ,string ,string ,double=0.0,double=0.0);
    void sethours(double);
    double gethours()const;
    void setwage(double );
    double getwage()const;
   virtual double earnings()const override;
   virtual void print()const override;



};
#endif // HOURLY_H
