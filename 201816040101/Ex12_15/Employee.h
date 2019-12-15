#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>

using namespace std ;

class Employee
{
public:
    Employee(string , string , string );
    virtual ~Employee() {}

    void setFirstName(string );
    string getFirstName( );

    void setLastName(string );
    string getLastName( );

    void setSSN(string );
    string getSSN( );

    virtual double earnings()=0 ;
    virtual void print() ;
private:
    string firstName;
    string lastName;
    string ssn;//secical security number

};


#endif
