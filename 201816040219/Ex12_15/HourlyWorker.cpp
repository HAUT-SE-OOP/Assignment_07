#include<iostream>
#include<stdexcept>
#include"HourlyWorker.h"
using namespace std;
HourlyWorker::HourlyWorker(const string &first,const string &last, const string &ssn, double a, int b)
   :Employee(first, last, ssn)
   {
    wage=a;
    hours=b;
}
double HourlyWorker::earnings(){
   double earn;
   if(hours>40)
   {
       earn=40*wage+(hours-40)*1.5*wage;

   }
   else
   {

       earn=wage*hours;
   }
return earn;
}


    void HourlyWorker::print()const
{
    cout<<"HourlyWorker employee: ";

    Employee::print();

    cout<<"\nwage is : "<<wage<<"\nhours are: "<<hours<<endl;
    cout<<"收入:";
}
