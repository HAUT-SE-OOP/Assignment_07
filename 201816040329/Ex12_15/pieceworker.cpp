#include<iostream>
#include<stdexcept>

#include"piceworker.h"

pieceworker::pieceworker(const std::string &,const std::string &,const std::string &,double WG,double MY)
:Employee(F,L,SSn)
{

}

void pieceworker::setwage(double WG)
{
    wage=WG;
}
double pieceworker::getwage()
{
    return wage;
}

void pieceworker::setmoney(double MY)
{
    money=MY;
}

double pieceworker::getmoney()
{
    return getwage()*getmoney();
}

void pieceworker::print()
{
    cout<<"pieceworker employee";
    Employee::print();
    cout<<"\nwage"<<getwage()<<"piece:\n"<<getmoney();

}
