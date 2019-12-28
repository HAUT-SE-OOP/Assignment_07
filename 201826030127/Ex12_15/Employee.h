#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include<string>
using namespace std;
class Employee
{
public:
    Employee(const string &,const string &,const string &);
    virtual ~Employee();
    void setFirstName(const string &);//set firat name
    string getFirstName()  const;
    void setLastName(const string &);//set last name
    string getLastName()  const;
    void setSocialSecurityNumber(const string &);//set social security number
    string getSocialSecuityNumber()   const;
    virtual double earnings()=0;//pure virtual
    virtual void print()  const;
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;


};//end class Employee


#endif // EMPLOYEE_H_INCLUDED
