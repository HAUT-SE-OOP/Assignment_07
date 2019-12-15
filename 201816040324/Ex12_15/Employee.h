#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;
class Employee
{
public:
    Employee(const string &,const string &,const string &);
    virtual ~Employee() {}

    void setFistName(const string &);
    string getFirstName()const;

    void setLastName(const string &);
    string getLastName()const;

    void setSocialSecurityNumber(const string &);
    string getSocialSecurityNumber()const;

    virtual double earnings()const=0;
    virtual void print()const;
private:
    string firstName;//名字
    string lastName;
    string socialSecurityNumber;//电话
};

#endif
