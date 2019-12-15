//PieceWorker.cpp
#include <iostream>
#include "PieceWorker.h"
#include <stdexcept>
using namespace std;

PieceWorker::PieceWorker( const string &first,
    const string &last, const string &ssn, double w, double p)
    : Employee(first,last,ssn)
{
    setWage( w );
    setPieces( p);
}


void PieceWorker::setWage( double w )
{
    wage=w;
}

double PieceWorker::getWage() const
{
     return wage;
}

void PieceWorker::setPieces( double p )
{
    pieces=p;
}

double PieceWorker::getPieces() const
{
     return pieces;
}

double PieceWorker::earnings() const
{
    return getPieces()* getWage();
}
void PieceWorker::print() const
{
    cout <<"piece worker:";
    Employee::print();
    cout <<"\npieces:" << getPieces()
     << "\nwage:"<< getWage();
}
