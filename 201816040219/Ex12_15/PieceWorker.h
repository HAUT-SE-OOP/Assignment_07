#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include <string>
#include "Employee.h"

using namespace std;
class PieceWorker:public Employee
{
public :
    PieceWorker(const string &,const string &,const string &,double=0.00,int=0);
    virtual double earnings();
    virtual void print()const override;
private:
    double wage;
    int pieces;
};

#endif // PIECEWORKER_H_INCLUDED
