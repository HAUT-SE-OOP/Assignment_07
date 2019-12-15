// Exercise 12.15 Solution:Employee.h
//Employee abstract base class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
#include<iostream>
using namespace std;
class Employee
{
public:
    Employee(const string &,const string &,const string &);
    virtual ~Employee(){}//virtual destructor

    void setFirstName(const string &);//set first name
    string getFirstName()const;//return first name

    void setLastName(const string &);//set last name
    string getLastName()const;//return last name

    void setSocialSecurityNumber(const string &);//set social security number
    string getSocialSecurityNumber()const;//return social security number

    //pure virtual function makes Employee an abstract base class
    virtual double earnings() const = 0;
    virtual void print()const;//virtual
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
};


#endif // EMPLOYEE_H
