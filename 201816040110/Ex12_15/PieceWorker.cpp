#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(const string &first , const string &last , const string &ssn  , double Wage , double  Pieces )
:Employee( first , last , ssn )
{
    wage=Wage;
    pieces=Pieces;
}


double PieceWorker::earnings() const
{
    return wage*pieces;
}

void PieceWorker::print() const
{
    cout << "PieceWorker employee : ";
    Employee::print();
    cout << "\nwage : " << wage
    << "; pieces : " << pieces ;
}
