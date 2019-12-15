#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <string>

using namespace std;

class Employee
{
public:
    /*initializing the firstname, lastname, socialSecurityNumber */
    Employee(const string &, const string &, const string &);
    /* set and get the lastname, firstname, socialSecurityNumber*/
    void setFirstname(const string &);
    string getFirstname() const;
    void setLastname(const string &);
    string getLastname() const;
    void setSocialSecurityNumber(const string &);
    string getSocialSecurityNumber() const;
    /*earning is a pure virtual function*/
    virtual double earnings() const=0;
    /*print is a virtual function*/
    virtual void print() const;
private:
    string firstname;
    string lastname;
    string socialSecurityNumber;
};

#endif // EMPLOYEE_H_INCLUDED
