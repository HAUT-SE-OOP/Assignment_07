#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>

using namespace std;
class Employee
{
public:
    Employee(const string &,const string &,const string &);
    virtual ~Employee(){};//虚析构函数

    void setFirstName(const string &);//firstname的set和get函数
    string getFirstName()const;

    void setLastName(const string &);//lastname的set 和get函数
    string getLastName()const;

    void setSocialSecurityNumber(const string &);//SocialSecurityNumber的set和get函数
    string getSocialSecurityNumber()const;

    virtual double earnings()const=0;//earnings的纯虚函数
    virtual void print()const;//输出函数
private:
    string firstname;//名字
    string lastname;//姓氏
    string socialSecurityNumber;

};
#endif // EMPLOYEE_H
