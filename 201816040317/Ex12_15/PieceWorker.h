// Assignment_07: PieceWorker.h
// PieceWorker class definition
#ifndef PIECEWORKER_H
#define PIECEWORKER_H

#include <string> // C++ standard string class
#include "Employee.h"
using namespace std;

class PieceWorker: public Employee
{
public:
    PieceWorker( const string &, const string &,const string &, double = 0.0, double = 0.0 );
    void setWage( double );
    double getWage() ;

    void setPieces( double );
    double getPieces();

     virtual double earnings() override;
    virtual void print() override; // print object
private:
    double wage;
    double pieces;
};

#endif // PIECEWORKER_H
