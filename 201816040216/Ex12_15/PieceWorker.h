#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED

#include "Employee.h"

class PieceWorker:public Employee
{

public:
    PieceWorker(const string,const string, const string,double = 0.0,double = 0.0 );
    virtual ~PieceWorker() {};

    void setWage(double);//set function wage
    double getWage();

    void setpieces(double);//set function pieces
    double getpieces();

    virtual double earnings()const ;
    virtual void print()const ;
private:
    double Wage;
    double pieces;
};

#endif // PIECEWORKER_H_INCLUDED
