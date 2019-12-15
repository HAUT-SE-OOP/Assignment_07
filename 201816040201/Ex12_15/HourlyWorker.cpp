#include<bits/stdc++.h>
#include"HourlyWorker.h"

using namespace std;
HourlyWorker::HourlyWorker(string first,string last,string ssn,double money,double time):
Employee(first,last,ssn)
{
    setwage(money);
    sethours(time);
}
void HourlyWorker::setwage(double x)
{
    wage=x;
}

void HourlyWorker::sethours(double time)
{
   hours=time;
}
double HourlyWorker::gethours()const
{
    return hours;
}

double HourlyWorker::getwage()const
{
    return wage;
}

double HourlyWorker::earnings()const
{
 return hours>40?((hours-40)*1.5)+40*wage:hours*wage;
  //getmoney();
}
void HourlyWorker::print()const
{
    cout << "\nhourlyworker employee: " ;
    Employee::print();

}

