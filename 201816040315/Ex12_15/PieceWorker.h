//PieceWorker .h
//Piece Worker class derived from employee
#ifndef PIECEWORKER_H
#define PIECEWORKER_H

#include <string>
#include "Employee.h"
using namespace std;

class PieceWorker : public Employee
{
public:
    PieceWorker(const string &,const string &,const string &,double,int);
    virtual ~PieceWorker(){};//virtual destructor

    void setWage( double );//price per object
    double getWage()const;//retrieve wage

    void setPieces( int );//makes
    int getPieces()const;//
    virtual double earnings()const override;//calculate earnings
    virtual void print()const override;//print object
private:
    double wage;
    int pieces;
};//end class PieceWorker
#endif // PIECEWORKER_H
