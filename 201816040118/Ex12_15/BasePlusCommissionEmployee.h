#ifndef BASEPLUS_H
#define BASEPLUS—H
using namespace std;
class BasePlusCommissionEmployee:public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const string &,const string &,const string &,double=0.0,double=0.0,double=0.0);
    virtual ~CommissionEmployee(){}
    void setBaseSalary(double);
    double getBaseSalary()const;
    virtual double earnings()const override;
    virtual void print()const override;
private:
    double baseSalary;
};
#endif // BASEPLUS_H
