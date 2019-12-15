#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <string>
using namespace std;
class Employee
{
public:
    Employee(const string &,const string &,const string &);


    void setFirstName(const string &);//set first name;
    string getFirstName() const;//get first name;
    void setLastname(const string &);//set last name;
    string getLastName() const;//rerurn last name;
    void setSocialSecurityNumber(const string &);//set socialsecuritynumber;
    string getSocialSecurityNumber() const;//return socialsecuritynumber;
    virtual double earnings() const=0;
    virtual void print() const;
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
};


#endif // EMPLOYEE_H_INCLUDED
