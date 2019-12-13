#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include<iostream>
#include "Employee.h"

using namespace std;

class PieceWorker : public Employee
{
private:
    double Wage;
    double Pieces;
public:
    PieceWorker( const string &, const string &,
    const string &, double = 0.0, double = 0.0 );

    void setWage( double );//function to set wage
    double getWage();//function to get wage

    void setPieces( double );//function to set pieces
    double getPieces();//function to get pieces

    virtual void earnings();
    virtual void print();
};
#endif // PIECEWORKER_H_INCLUDED

