#include <iostream>
#include <stdexcept>

#include "PieceWorker.h"
#include <string>
using namespace std;

//PieceWorker constructor
PieceWorker::PieceWorker( const string &first, const string &last, const string &ssn,double piecewage, double ppiece)
    : Employee( first, last, ssn )
{
   setPieceWage(piecewage);
   setPiece(ppiece);
}

void PieceWorker::setPieceWage( double piecewage )
{
    if( piecewage >= 0.0 )
    {//判断
        pieceWage=piecewage;
    }
    else
        throw invalid_argument( "Piece Wage must be >= 0.0 " );

}
double PieceWorker::getPieceWage()const
{
    return pieceWage;
}

void PieceWorker::setPiece( double ppiece )
{
    if( ppiece >= 0 )
    {//判断
        piece=ppiece;
    }
    else
        throw invalid_argument( "Piece must be >= 0.0" );

}
double PieceWorker::getPiece() const
{
    return piece;
}
//calculate earnings
double PieceWorker::earnings() const
{
    return getPiece()*getPieceWage();
}

void PieceWorker::print() const
{
    cout << "piece worker: ";
    Employee::print();
    cout<<"\npiece wage: " << getPieceWage()
    <<";\npiece: " << getPiece();
}





