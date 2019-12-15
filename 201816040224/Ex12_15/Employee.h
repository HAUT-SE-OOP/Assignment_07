//Fig.12.9:Employee.h
//Employee abstract base class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>//c++ standard string class

class Employee
{
public:
    Employee(const std::string &,const std::string &,const std::string &);
    virtual ~Employee(){}//virtual destrustor

    void setFirstName(const std::string &);//set first name
    std::string getFirstName()const;//return first name

    void setLastName(const std::string &);//set last name
    std::string getLastName()const;//return last name

    void setSocialSecurityNumber(const std::string &);//set SSN
    std::string getSocialSecurityNumber()const;//return ssn

    //pure virtual function makes Employee an abstract base class
    virtual double earning()const;//pure virtual
    virtual void print()const;//virtual
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;

};//end class Employee
#endif // EMPLOYEE_H
