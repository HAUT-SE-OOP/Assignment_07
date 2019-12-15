#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include <iostream>
#include <stdexcept>
#include "Employee.h"
using namespace std;
class PieceWorker:public Employee
{
public:

    PieceWorker(const string &,const string &,const string &,double=0.0,double=0.0);

    void setWage(double);//set wage;
    double getWage();//return wage;
    void setPieces(double);//set pieces;
    double getPieces();//return pieces;
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double wage;
    double pieces;
};


#endif // PIECEWORKER_H_INCLUDED
