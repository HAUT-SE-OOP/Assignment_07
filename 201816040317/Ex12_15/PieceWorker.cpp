#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker( const string &first, const string &last, const string &ssn,double wages, double piece ) : Employee( first, last, ssn )
{
   setWage( wages );
   setPieces( piece );
}

void PieceWorker::setWage( double wages )
{
   if( wages >= 0 )
    wage = wages;
    else
        cout<<"error";
}

double PieceWorker::getWage()
{
   return wage;
}

void PieceWorker::setPieces( double piece )
{
   if( piece >= 0 )
        pieces = piece;
   else
        cout<<"error";
} // end function setPieces

// return pieces
double PieceWorker::getPieces()
{
       return pieces;
}

double PieceWorker::earnings()
{
   return getPieces() * getWage();
}
void PieceWorker::print()
{
   Employee::print();
   cout << "the wage is: " << getWage()<<endl;
   cout<< "the pieces is: " << PieceWorker::getPieces()<<endl;
}
