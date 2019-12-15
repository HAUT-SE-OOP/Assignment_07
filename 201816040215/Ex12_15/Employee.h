#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <string> //C++ standard string class
using namespace std;

class Employee
{
public:
    Employee( const string &, const string &,
             const string & );
    virtual ~Employee(){};//irtual destructor

    void setFirstName( const string & );//set first name
    string getFirstName() const;//get first name

    void setLastName( const string & );//set last name
    string getLastName() const;//get last name

    void setSocialName( const string & );//set SSN
    string getSocialName() const;//get SSN

    virtual double earnings() const = 0;//pure cirtual
    virtual void print() const;//virtual
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
};//end class Employee

#endif // EMPLOYEE_H_INCLUDED
