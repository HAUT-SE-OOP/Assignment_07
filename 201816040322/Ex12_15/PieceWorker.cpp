// Assignment_07: PieceWorker.cpp
// Class PieceWorker member-function definitions.
#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"// PieceWorker class definition
using namespace std;

// constructor
PieceWorker::PieceWorker( const string &first,
    const string &last, const string &ssn,
    double wages, double piece )
    : Employee( first, last, ssn )
{
   setWage( wages ); // validate wage
   setPieces( piece ); // validate piece
} // end PieceWorker constructor

// set wage amount
void PieceWorker::setWage( double wages )
{
   if( wages >= 0 )
        wage = wages;
   else
        throw invalid_argument( "Wage must be >=0.0" );
} // end function setWage

// return wage amount
double PieceWorker::getWage() const
{
   return wage;
} // end function getWage

// set pieces
void PieceWorker::setPieces( double piece )
{
   if( piece >= 0 )
        pieces = piece;
   else
        throw invalid_argument( "Pieces must be >=0.0" );
} // end function setPieces

// return pieces
double PieceWorker::getPieces() const
{
   return pieces;
} // end function getPieces

// calculate earnings
double PieceWorker::earnings() const
{
   return getPieces() * getWage();
} // end function earnings

// print PieceWorker object
void PieceWorker::print() const
{
   cout << "PieceWorker employee: ";
   Employee::print();
   cout << "\nwage: " << getWage()
      << "; pieces: " << getPieces();
} // end function print
