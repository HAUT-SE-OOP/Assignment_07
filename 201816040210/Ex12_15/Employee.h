#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
    Employee( const string &, const string &,const string & );//constructor function
    virtual ~Employee(){};//virtual destructor

   void setFirstName( const string & );
   //function to set employee's first name
   string getFirstName() const;
   //function to get employee's first name
   void setLastName( const string & );
   //function to set employee's last name
   string getLastName() const;
   //function to get employee's last name
   void setSocialSecurityNumber( const string & );
   //function to set social security number
   string getSocialSecurityNumber() const;
   //function to get social security number

   virtual double earnings() const = 0;//pure virtual
   virtual void print() const;//virtual
private:
   string firstName;
   string lastName;
   string socialSecurityNumber;
}; // end class Employee


#endif // EMPLOYEE_H_INCLUDED
