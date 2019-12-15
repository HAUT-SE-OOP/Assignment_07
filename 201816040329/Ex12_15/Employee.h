#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED



#endif // EMPLOYEE_H_INCLUDED

class Employee
{
public:
    Employee(const std::string &,const std::string &,const std::string &);

    void setFname(const std::string &);
    std::string getFname();

    void setLname(const std::string &);
    std::string getLname();

    void setSSnumber(const std::string &);
    std::string getSSnumber();

    virtual void print();
    virtual double earings()const;

private:
    string Fname;
    string Lname;
    string SSnumber;

};
