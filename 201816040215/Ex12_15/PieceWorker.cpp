//HourlyWoker.cpp
#include <iostream>
#include <stdexcept>
#include "PieceWoker.h"
using namespace std;

//constructor
PieceWoker::PieceWoker(
   const string &first, const string &last, const string &ssn,
   double w, double p )
: Employee( first, last, ssn )
{
    setWage( w );
    setPiece( p );
}//end CommissionEmployee constructor

void PieceWoker::setWage( double w )
{
    if( w >= 0.0 )
        wage = w;
    else
        throw invalid_argument( "The wage must be >= 0.0 ")
}

double PieceWoker::getWage()
{
    return wage;
}

void PieceWoker::setpieces( int p )
{
    if( p >= 0 )
        pieces = p;
    else
        throw invalid_argument( "The pieces must be >= 0 ")
}

double PieceWoker::getPieces()
{
    return pieces;
}

double PieceWoker::earnings() const
{
    return getWage() * getPieces();
}//end function earnings

void PieceWoker::print() const
{
    cout << "PieceWoker: ";
    Employee::print(); //code reuse
    cout << "\nwage: " << getWage() << "pieces: " << getHour();
}//end function print
