#ifndef EMPOLYEE_H_INCLUDED
#define EMPOLYEE_H_INCLUDED
#include<string>
using namespace std;
class Employee{
public:
    Employee(const string &,const string &,const string &);
    void setfirstname(const string &);
    string getfirstname();
    void setlastname(const string &);
    string getlastname();
    void setsocialnumber(const string &);
    string getsocialnumber();
    virtual double earnings()=0;
    virtual void print();
private:
    string fname,lname,sonumber;


};


#endif // EMPOLYEE_H_INCLUDED
