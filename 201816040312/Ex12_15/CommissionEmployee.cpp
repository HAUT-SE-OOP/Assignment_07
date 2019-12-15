#include <iostream>
#include <stdexcept>
#include "CommissionEmployee.h"

using namespace std;

//constructor
CommissionEmployee::CommissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate)
:Employee(first,last,ssn)
{
    setgrosssales(sales);
    setcommissionrate(rate);
}//end commissionEmployee constructor

//set gross sales amount
void CommissionEmployee::setgrosssales(double sales)
{
    if(sales>=0.0)
        grosssales=sales;
    else
        throw invalid_argument("Gross Sales must be >=0.0");
}//end function setgrosssales

//return gross sales amount
double CommissionEmployee::getgrosssales()const
{
    return grosssales;
}//end function

//set commission rate
void CommissionEmployee::setcommissionrate(double rate)
{
    if(rate>0.0&&rate<1.0)
        commissionrate=rate;
    else
        throw invalid_argument("commission rate must be >=0.0 and <1.0");
}//end function
//return commission rate
double CommissionEmployee::getcommissionrate()const
{
    return commissionrate;
}//end function
//calculate earning:override pure virtual function earnings in Employee
double CommissionEmployee::earnings()const
{
    return getcommissionrate()*getgrosssales();
}//end function
//print commissionemployee's information
void CommissionEmployee::print()const
{
    cout<<"commission employee:";
    Employee::print();
    cout<<"\ngross sales:"<<getgrosssales()<<";\n"<<"commission rate:"<<getcommissionrate();
}//end function print
