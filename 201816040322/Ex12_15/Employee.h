// Assignment_07: Employee.h
// Employee class definition.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:
   explicit Employee( const string &, const string &, const string & );// a constructor that has one parameter for each data member
   virtual ~Employee() {} // virtual destructor

   void setFirstName( const string & );// a set method for the employee's first name
   string getFirstName() const;// a get method for the employee's first name

   void setLastName( const string &);// a set method for the employee's last name
   string getLastName() const;// a get method for the employee's last name

   void setSocialSecurityNumber( const string &);// a set method for the employee's Social Security Number
   string getSocialSecurityNumber() const;// a get method for the employee's Social Security Number

   // pure virtual function makes Employee an abstract base class
   virtual double earnings() const = 0; // pure virtual
   virtual void print() const; // virtual
private:
   string FirstName;// a string data member for the employee's first name
   string LastName;// a string data member for the employee's last name
   string socialSecurityNumber;// an int data member for the employee's Social Security Number
}; // end class Employee

#endif // EMPLOYEE_H
