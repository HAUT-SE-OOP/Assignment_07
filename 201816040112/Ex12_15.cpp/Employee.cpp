#include "Empolyee.h"
#include <iostream>
Employee::Employee(const string &a,const string &b,const string &c)
{
    setfirstname(a);
    setlastname(b);
    setsocialnumber(c);
}
void Employee::setfirstname(const string &a)
{
    fname=a;
}
void Employee::setlastname(const string &a)
{
    lname=a;
}
void Employee::setsocialnumber(const string &a)
{
    sonumber=a;
}
string Employee::getfirstname()
{
    return fname;
}
string Employee::getlastname()
{
    return lname;
}
string Employee::getsocialnumber()
{
    return sonumber;
}
void Employee::print()
{
    cout<<fname<<" "<<lname<<" social number\n"<<sonumber<<endl;
}
