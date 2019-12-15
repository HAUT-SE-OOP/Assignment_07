#include<stdexcept>
#include <iostream>
using namespace std;
#include"PieceWorker.h"

// constructor
PieceWorker::PieceWorker(
   const string &first, const string &last, const string &ssn,
   double p ,double w)
   : Employee(first,last,ssn)//initialize  data member
{
   setPiece( p ); // set piece
   setWage(w);//set wage
} // end  constructor


// set base salary
void PieceWorker::setPiece( double p)
{
   piece= (p < 0.0 ) ? 0.0 : p;
} // end function setPiece
// return base salary
double PieceWorker::getPiece() const
{
   return piece;
} // end function getPiece

void PieceWorker::setWage( double w)
{
   wage= (w < 0.0 ) ? 0.0 : w;
} // end function setWage

// return wage
double PieceWorker::getWage() const
{
   return wage;
} // end function getWage
// calculate earnings
double PieceWorker::earnings() const
{
   return getWage()*getPiece();

} // end function earnings

// print  object
void PieceWorker::print() const
{
   cout << "piece worker ";
Employee::print();//print message

   cout << "\npiece: " << getPiece();
   cout<<"\nwage: "<<getWage();
} // end function print


