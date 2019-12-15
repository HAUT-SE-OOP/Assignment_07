#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>// program uses C++ standard string class
using namespace std;
// Employee class definition
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
    // pure virtual function makes Employee an abstract base class
    virtual double earnings()const=0;// pure virtual
    virtual void print()const;// virtual
private:
    string firstName;// a string data member for the employee's first name
    string lastName;// a string data member for the employee's last name
    string socialSecurityNumber;// an int data member for the employee's Social Security Number
};// end class Employee

#endif
