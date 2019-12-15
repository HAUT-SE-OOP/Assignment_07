#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>

using namespace std;
class Employee
{
public:
    Employee(const string &,const string &,const string &);
    virtual ~Employee(){};//virtual destructor

    void setFirstName(const string &);//set first name
    string getFirstName()const;//return first name

    void setLastName(const string &);//set last name
    string getLastName()const;//return last name

    void setSocialSecurityNumber(const string &);//set ssn
    string getSocialSecurityNumber()const;//return ssn

    virtual double earnings()const=0;//pure virtual
    virtual void print()const;//virtual
private:
    string firstname;
    string lastname;
    string socialSecurityNumber;

};
#endif // EMPLOYEE_H
