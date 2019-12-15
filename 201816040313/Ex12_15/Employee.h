#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include <string>

class Employee{
 public:
   Employee( const std::string &, const std::string &, const std::string &);//constructor
   virtual ~Employee(){}//destructor

   void setFirstName( const std::string & ); // set first name
   std::string getFirstName() const; // return first name

   void setLastName( const std::string & ); // set last name
   std::string getLastName() const; // return last name

   void setSocialSecurityNumber( const std::string & ); // set SSN
   std::string getSocialSecurityNumber() const; // return SSN

   virtual double earnings() const=0; // calculate wage
   virtual void print() const;  //print worker information
private:
   std::string firstName;
   std::string lastName;
   std::string socialSecurityNumber;
};

#endif // EMPLOYEE_H_INCLUDED
