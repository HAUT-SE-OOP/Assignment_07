//PieceWorker.h
#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED

#include <string>
#include "Employee.h"
using namespace std;

class PieceWorker:public Employee
{
public:
    PieceWorker(const string &first,const string &last,const string &ssn,double wage,int pieces);
    virtual double earnings()const;//calculate earnings
    virtual void print()const;//virtual
private:
    double wage;
    int pieces;

};

#endif // PIECEWORKER_H_INCLUDED
