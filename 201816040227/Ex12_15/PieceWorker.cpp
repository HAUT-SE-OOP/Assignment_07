#include <iostream>
#include <stdexcept>
#include "PieceWorker.h" 
using namespace std;

// constructor
PieceWorker::PieceWorker( const string &first,
   const string &last, const string &ssn, double wage, int pieces, double salary)
   : Employee( first, last, ssn )
{
   setPieceWage( wage );
   setPieces( pieces );
   setSalary( salary );
} 

// set pieceWage 
void PieceWorker::setPieceWage( double a )
{
   if ( a >= 0.0 )
      pieceWage = a;
   else
      throw invalid_argument( "wage must be >= 0.0" );
} 

// return pieceWage
double PieceWorker::getPieceWage() const
{
    return pieceWage;
} 

// set pieces
void PieceWorker::setPieces( double a)
{
   if ( a > 0)
      pieces = a;
   else
      throw invalid_argument( "Commission rate must be > 0.0 and < 1.0" );
} 

// return pieces
double PieceWorker::getPieces() const
{
    return pieces;
}

void PieceWorker::setSalary( double salary )
{
   if ( salary >= 0.0 )
      salary = salary;
   else
      throw invalid_argument( "salary must be >= 0.0" );
} // end function setSalary

// return salary
double PieceWorker::getSalary() const
{
   return salary;
} // end function getSalary

// calculate earnings; override pure virtual function earnings in Employee
double PieceWorker::earnings() const
{
   return getPieceWage() * getPieces();
} // end function earnings

// print information
void PieceWorker::print() const
{
   cout << "Piece worker: ";
   Employee::print(); // code reuse
   cout << "\npiece wage: " << getPieceWage()
        << "; pieces : " << getPieces();

} // end function print
