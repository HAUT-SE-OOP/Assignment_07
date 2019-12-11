#include <iostream>
#include "Employee.h"
#include "PieceWorker.h"


using namespace std;

PieceWorker::PieceWorker( const string &first, const string &last,
                         const string &ssn, double wage, double pieces )
            :Employee( first, last , ssn )
            {
                setWage( wage );
                setPieces( pieces );
            }

void PieceWorker::setWage( double wage )
{
    if( wage >= 0)
    Wage = wage;
    else
       throw invalid_argument("Wage should be greater than 0!") ;
}
//function to set wage

double PieceWorker::getWage()
{
    return Wage;
}
//function to get wage

void PieceWorker::setPieces( double pieces )
{
    if( pieces >= 0)
        Pieces = pieces;
    else
       throw invalid_argument("Pieces should be greater than 0!") ;
}
//function to set pieces

double PieceWorker::getPieces( )
{
    return Pieces;
}
//function to get pieces

void PieceWorker::earnings()
{
    cout << "The piece worker's earning is: " << endl;
    cout << getWage() * getPieces() << endl;
}
//function to show earnings
