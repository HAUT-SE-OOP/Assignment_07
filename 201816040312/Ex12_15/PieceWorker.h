#ifndef PIECEWORKER_H
#define PIECEWORKER_H

#include<string>
#include"SalariedEmployee.h"
using namespace std;

class PieceWorker:public SalariedEmployee
{
public:
    PieceWorker(const string&,const string &,const string &,double=0.0,double=0.0);
    virtual ~PieceWorker(){};//virtual

    void setwage(double);//时薪的set\get函数
    double getwage()const;

    void setpieces(double);//件数的set\get函数
    double getpieces()const;

    void setweeklysalary();//set weekly salary
    double getweeklysalary()const;//return weekly salary

    double earnings()const override;
    void print()const override;
private:
    double wage;//每件的工资
    double pieces;//件数
};
#endif //PIECEWORKER_H
