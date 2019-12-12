#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED

#include <string>
#include "Employee.h" // Employee class definition
using namespace std;

class PieceWorker : public Employee
{
public:
    PieceWorker( const string &, const string &, const string &, double = 0.0, double = 0.0 );
    virtual ~PieceWorker() {} // virtual destructor

    void setWage( double ); //set wage
    double getWage() const; //return wage

    void setPieces( double ); //set Pieces
    double getPieces() const; //return Pieces

    virtual double earnings() const override; // calculate earnings
    virtual void print() const override; // print object
private:
    double wage; // one piece of salary
    double pieces; // total pieces
};

#endif // PIECEWORKER_H_INCLUDED
