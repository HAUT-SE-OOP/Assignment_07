#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include<string>
using namespace std;
class Employee
{
public:
    Employee(const string &,const string &,const string &);
    void setFirstName(const string &);
    string getFirstName()const;
    void setLastName(const string &);
    string getLastName()const;
    void setSocialSecurityNumber(const string &);
    string getSocialSecurityNumber()const;
    virtual double earnings();
    virtual void print();
private:
    string firstname;
    string lastname;
    string SocialSecurityNumber;
};
#endif // EMPLOYEE_H_INCLUDED
