#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED

using namespace std;
class salariedEmployee
{
public:
    salariedEmployee(const std::string &,const std::string &,const std::string &,double=0.0);

    void setWsalary( double );
    double getWsalary();

    virtual void print();
    virtual double earings()const;
private:
    double weeksalary;


};

#endif // SALARIEDEMPLOYEE_H_INCLUDED
