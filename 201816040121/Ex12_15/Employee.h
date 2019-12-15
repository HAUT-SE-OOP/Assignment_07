//Ex12_15:Employee.h
//Employee abstract base class.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;
class Employee
{
public:
	Employee(const string&, const string&, const string&);
	virtual ~Employee() {}//virtual destructor

	void setFirstName(const string&);//set first name
	string getFirstName() const;//reruan first name

	void setLastName(const string&);//set last name
	string getLastName() const;//return last name

	void setSocialSecurityNumber(const string&);//set social security number
	string getSocialSecurityNumber() const;//return social security number

	//pure virtual fuction makes Employee an abstract base class
	virtual double earnings() const = 0;//pure virtual
	virtual void print() const;//virtual print fuction
private:
	string firstName;
	string lastName;
	string socialSecurityNumber;
};
#endif // !EMPLOYEE_H

