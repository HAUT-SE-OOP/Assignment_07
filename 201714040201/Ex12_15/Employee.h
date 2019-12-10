//Employee.h
//Employee abstract base class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>//c++ standard string class
using namespace std;
class Employee
{
public:
    Employee(const string &,const string &,const string &);
    virtual ~Employee(){}//virtual destructor
    void setFirstName(const string &);//set first name
    string getFirstName()const;//get first name
    void setLastName(const string &);//set last name
    string getLastName();//get last name
    void setSocialSecurityNumber(const string &);//set social security number
    string getSocialSecurityNumber();//get social security number
    virtual double earnings() =0;//pure virtual
    virtual void print();//virtual
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
};//end class Employee

#endif // EMPLOYEE_H
