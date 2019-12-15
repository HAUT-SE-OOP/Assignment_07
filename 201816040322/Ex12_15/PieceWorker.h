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
    PieceWorker( const string &, const string &,
            const string &, double = 0.0, double = 0.0 );
    virtual ~PieceWorker() {}

    void setWage( double ); // set wage amount
    double getWage() const; // return wage amount

    void setPieces( double ); // set piece
    double getPieces() const; // return piece

    virtual double earnings() const override; // calculate earnings
    virtual void print() const override; // print PieceWorker object
private:
    double wage;
    double pieces;
};

#endif // PIECEWORKER_H
