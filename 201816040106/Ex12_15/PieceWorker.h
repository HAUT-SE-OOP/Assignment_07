#ifndef PIECERWORKER_H
#define PIECERWORKER_H
#include"Employee.h"
class PieceWorker:public Employee
{
private:
    double wage;
    int pieces;
public:
    PieceWorker(const string &,const string &,const string &,double,int);
    virtual double earnings() const override;
    virtual void print() const override;
};
#endif
