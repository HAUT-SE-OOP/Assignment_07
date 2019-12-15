#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"
using namespace std;

//constructor
PieceWorker::PieceWorker(
   const string &first, const string &last, const string &ssn,
   double Wage, double Pieces)
: Employee( first, last, ssn )
{
    setwage( Wage );
    setpieces( Pieces );
}//end HourlyEmployee constructor

void PieceWorker::setwage(double Wage)
{
    if( Wage >= 0.0)
        wage = Wage;
    else
        throw invalid_argument("wage must be > 0.0");
}

double PieceWorker::getwage()
{
    return wage;
}

void PieceWorker::setpieces(double Pieces)
{
    if( Pieces >= 0.0)
        pieces=Pieces;
    else
        throw invalid_argument("pieces must be > 0.0");
}

double PieceWorker::getpieces()
{
    return pieces;
}

double PieceWorker::earnings() const
{
    return getpieces()*getwage();
}

void PieceWorker::print() const
{
    cout<<" pieces worker: ";
    Employee::print();
    cout<<" wage: "<<getwage()<<" pieces: "<<getpieces()<<endl;
}
