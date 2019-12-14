#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include<string>
#include"Employee.h"
using namespace std;
class PieceWorker : public Employee
{
public:
    PieceWorker(const string &,const string &,const string &,double=0.0,int=0);
    virtual double earnings()const override;//return
    virtual void print()const override;//print
private:
    double wage;
    int pieces;
};

#endif // PIECEWORKER_H_INCLUDED
