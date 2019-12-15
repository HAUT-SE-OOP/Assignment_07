#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED

#include<bits/stdc++.h>
using namespace std;
#include "Employee.h"
class PieceWorker:public Employee
{
public:
    PieceWorker( const string &, const string &, const string &, int=0, int=0 );//constructor function
    virtual ~PieceWorker(){};//virtual destructor

    void setWage( int );//set wage
    int getWage()const;//return wage
    void setPieces( int );//set pieces
    int getPieces()const;//return pieces

    virtual double earnings()const override;//function to calculate earnings
    virtual void print()const override;//function to print object
private:
    int wage;
    int pieces;
};//end class PieceWorker


#endif // PIECEWORKER_H_INCLUDED
