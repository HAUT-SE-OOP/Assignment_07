
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

 // EMPLOYEE_H
#include <string> // program uses C++ standard string class
using namespace std;

// Employee class definition
class Employee
{
public:

   Employee(string, string,string ) ; /* Declare a constructor that has one parameter for each data member */
   void setfirstname(string );/* Declare a set method for the employee's first name */
  string getfirstname( )const; /* Declare a get method for the employee's first name */
   void setlastname(string);/* Declare a set method for the employee's last name */
   string getlastname( )const;/* Declare a get method for the employee's last name */
  /* Declare a set method for the employee's monthly salary */
 void setsocialnumber(string);
 string getsocialnumber()const;

   virtual double earnings()const=0;
   virtual void print() const;
   /* Declare a get method for the employee's monthly salary */
private:
  string firstname; /* Declare a string data member for the employee's first name */
   string lastname;/* Declare a string data member for the employee's last name */
   string socialnumber;/* Declare an int data member for the employee's monthly salary */
}; // end class Employee
#endif
