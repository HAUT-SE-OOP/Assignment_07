#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;
class Employee
{
public:
    Employee(string,string,string);
    virtual ~Employee(){}

    void setFirstName(string) ;
    string getFirstName() const;

    void setLastName(string) ;
    string getLastName() const;

    void setSocialSecurityNumber(string);
    string getSocialSecurityNumber() const;

    virtual double earnings()  = 0;
    virtual void print() ;
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;

};


#endif // EMPLOYEE_H
