#include <iostream>
#include <stdexcept>
#include "PieceWorker.h" //PieceWorker class definition
using namespace std;

//constructor
PieceWorker::PieceWorker( const string &first, const string &last, const string &ssn, double Wage, double Pieces )
    :Employee( first, last, ssn )
{
    setWage( Wage ); // validate and store wage
    setPieces( Pieces ); // validate and store pieces
} // end PieceWorker constructor

//set wage
void PieceWorker::setWage( double Wage)
{
    if ( Wage >= 0.0 )
        wage = Wage;
    else
        throw invalid_argument( "Wage must be >= 0.0" );
} // end function setWage

//return wage
double PieceWorker::getWage() const
{
    return wage;
} // end function getWage

//set pieces
void PieceWorker::setPieces( double Pieces)
{
    if ( Pieces >= 0.0 )
        pieces = Pieces;
    else
        throw invalid_argument( "Pieces must be >= 0.0" );
} // end function setPieces

//return pieces
double PieceWorker::getPieces() const
{
    return pieces;
} // end function getPieces

//calculate earnings
double PieceWorker::earnings() const
{
    return getWage() * getPieces () ;
} // end function earnings

// print PieceWorker's information
void PieceWorker::print() const
{
    cout << "piece worker: ";
    Employee::print(); //reuse abstract base-class print function
    cout << "\nwage: " << getWage();
    cout << "; pieces: " << getPieces();
} // end function print
