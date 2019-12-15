#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"
using namespace std;
PieceWorker::PieceWorker( const string& first, const string &last,const string &ssn,double wa,double pie)
:Employee( first , last , ssn )
{
    setWage( wa );
    setPieces(pie);
}
void PieceWorker::setWage( double wa )
{
    if( wa >= 0.0 )
        wage = wa;
    else
throw invalid_argument( "wage must be >= 0.0 " );
}
double PieceWorker::getWage()
{
    return wage;

}
void PieceWorker::setPieces( double pie )
{
    if( pie>= 0.0 )
        pieces = pie;
    else
throw invalid_argument( "Pieces must be >= 0.0 " );
}
double PieceWorker::getPieces()
{
    return pieces;

}
double PieceWorker::earnings()const
{

    return getWage()*getPieces();
}
void PieceWorker::print() const

{
    cout << "HourlyWorker employee : ";
    Employee::print();
    cout << "\nPieceWorker wage: " << getWage() ;
    cout << "\nPieceWorker Hours: " << getPieces() ;

}
