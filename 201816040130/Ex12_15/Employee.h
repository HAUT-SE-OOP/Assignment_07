#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;
class Employee //definition of class Employee
{
public:
    Employee(const string &,const string &,const string &); //declare function to constructor of Employee
    void setFirstName(const string &); //declare function to setFirstName
    string getFirstName() const; //declare function to getFirstName

    void setLastName(const string &); //declare function to setLastName
    string getLastName() const; //declare function to getLastName

    void setSocialSecurityNumber(const string &); //declare function to setSocialSecurityNumber
    string getSocialSecurityNumber() const; //declare function to getSocialSecurityNumber

    virtual double earnings() const = 0; //declare function to earnings
    virtual void print() const; //declare function to print
private:
    string firstName; //data member firstName
    string lastName;
    string socialSecurityNumber;
};
#endif // EMPLOYEE_H
