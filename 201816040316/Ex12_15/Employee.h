#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#ifndef EMPLOYEE H
#define EMPLOYEE H
#include < string >
using  namespace atd;
 class Employee
{
public:
    Employee(const string&, const string&, const string &);
    virtual ~Emplyee(){}

    void setFirstName(const string &);
    string getFirstName()const;

    void setLastName(const string &);
    string getLastName()const;

    void setSocialSecurityNumber(const string &);
    string getSocialSecurityNumber()const;

    virtual double earings()const = 0;
    virtual void printf()const;
private:
    string firstname;
    string lastname;
    string socialSecurityNumber;
#endif // EMPLOYEE_H_INCLUDED
