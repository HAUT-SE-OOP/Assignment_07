//CommissionEmployee.cpp
#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"
using namespace std;

//constructor
PieceWorker::PieceWorker(
   const string &first, const string &last, const string &ssn,
   double wages, int piece)
:Employee( first, last, ssn )
{
    setWage(wages);
    setPieces(piece);
}//end PieceWorker constructor

//set wage
void PieceWorker::setWage( double wages )
{
    if( wages >= 0.0)
        wage = wages;
    else
        throw invalid_argument("Wage must be >= 0.0");
}//end function setWage

//return wage
double PieceWorker::getWage() const
{
    return wage;
}//end function getWage

//set pieces
void PieceWorker::setPieces( int piece )
{
   if( piece >= 0)
        pieces = piece;
    else
        throw invalid_argument("Pieces must be >= 0");
}//end function setPieces

//return pieces
int PieceWorker::getPieces() const
{
    return pieces;
}//end function getPieces

double PieceWorker::earnings() const
{
    return getWage() * getPieces();
}//end function earnings

void PieceWorker::print() const
{
    cout << "piece worker: ";
    Employee::print(); //code reuse
    cout << "\nWage: " << getWage() << "; Pieces: " << getPieces();
}//end function print
