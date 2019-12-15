//Employee.h
#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <string>
class Employee
{
public:
    Employee(const std::string &,const std::string &,const std::string &);//constructor with three parameter
    virtual ~Employee(){}
    void setFirstName(const std::string &);//to set the first name
    std::string getFirstName()const;//to get the first name

    void setLastName(const std::string &);//to set the last name
    std::string getLastName()const;//to get the last name

    void setSocialSecurityNumber(const std::string &);//to set the social security number
    std::string getSocialSecurityNumber()const;//to get the social security number

    virtual double earnings() const=0;//pure virtual function earnings
    virtual void print()const;//virtual function print

    private:
        std::string firstName;//data member
        std::string lastName;//data member
        std::string socialSecurityNumber;//data member
};


#endif // EMPLOYEE_H_INCLUDED
