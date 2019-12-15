#include "HourlyWorker.h"
#include <iostream>
HourlyWorke::HourlyWorke(const string &a,const string &b,const string &c,const int x,const double y):Employee(a,b,c)
{
    hour=x;
    hp=y;
}
double HourlyWorke::earnings()
{
    if(hour<=40)
        return hour*hp;
    else
        return 40*hp+(hour-40)*1.5*hp;
}
void HourlyWorke::print()
{
    cout<<getfirstname()<<" "<<getlastname()<<"总收入="<<earnings()<<"\n社保号为 "<<getsocialnumber()<<endl;
}
