// Class CommissionEmployee member-function definitions.
#include <iostream>
using namespace std;
#include <stdexcept>
#include "PieceWorker.h" // CommissionEmployee class definition

// constructor
PieceWorker::PieceWorker(
   const string &first, const string &last, const string &ssn,
   double wage, double pieces )
   :Employee(first,last,ssn)
{
   setWage( wage ); // validate and store gross sales
   setPieces( pieces ); // validate and store commission rate
} // end CommissionEmployee constructor

// set gross sales amount
void PieceWorker::setWage( double wage )
{
   Wage = ( wage < 0.0 ) ? 0.0 : wage;
} // end function setGrossSales

// return gross sales amount
double PieceWorker::getWage() const
{
   return Wage;
} // end function getGrossSales

// set commission rate
void PieceWorker::setPieces( double pieces )
{
   Pieces = ( pieces > 0.0 ) ? pieces : 0.0;
} // end function setCommissionRate

// return commission rate
double PieceWorker::getPieces() const
{
   return Pieces;
} // end function getCommissionRate

// calculate earnings
double PieceWorker::earnings() const
{
   return getWage()* getPieces();
} // end function earnings

// print CommissionEmployee object
void PieceWorker::print()
{
   cout << "Piece Worker: ";
   Employee::print();
   cout<< "\nWage : " <<getWage()
      << "\nPieces: " <<getPieces();
} // end function print
