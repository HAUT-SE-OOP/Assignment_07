#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include "Employee.h"
#include <string>
using namespace std;

class PieceWorker:public Employee //definition of class PieceWorker
{
public:

    PieceWorker(const string &,const string &,const string &, double = 0.0,double = 0.0);

    virtual double earnings()const override;//pure virtual
    virtual void print()const override;

private:
    double wage;
    double pieces;
};
#endif
