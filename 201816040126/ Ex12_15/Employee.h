#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <iostream>
#include "Employee.h"


using namespace std;

class Employee
{
private:
    string FirstName;
    string LastName;
    string SocialSecurityNumber;
public:
    Employee( const string &, const string &,
                   const string & );
    void setSocialSecurityNumber( const string &  );
    string getSocialSecurityNumber() const;

    void setLastName( const string &  );
    string getLastName() const;

    void setFirstName( const string &  );
    string getFirstName() const ;

    virtual void earnings() = 0;
    virtual void print();

};
#endif // EMPLOYEE_H_INCLUDED

