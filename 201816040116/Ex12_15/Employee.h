#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include<iostream>
#include"Employee.h"
#include<string.h>
using namespace std;
class Employee
{
public:
    Employee(string,string,string);
    void setFirstName(string);
    string getFirstName();
    void setLastName(string);
    string getLastName();
    void setSocialSecurityNumber(string);
    string getSocialSecurityNumber();
    virtual double earnings()=0;
    virtual void print();
private:
    string firstname;
    string lastname;
    string socialsecuritynumber;
};
#endif // EMPLOYEE_H_INCLUDED
