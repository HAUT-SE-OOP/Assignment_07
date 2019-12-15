#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <string> // C++ standard string class
using namespace std;
class Employee
{
public:
   Employee( string,string,string);
   void setFirstName(string); // set first name
   string getFirstName(); // return first name

   void setLastName(string); // set last name
   string getLastName() ; // return last name

   void setSocialSecurityNumber( string  ); // set SSN
   string getSocialSecurityNumber(); // return SSN

   virtual double earnings() =0; // calculate earnings
   virtual void print(); // print Employee object
private:
   string firstName;
   string lastName;
   string socialSecurityNumber;
};
#endif // EMPLOYEE_H_INCLUDED
