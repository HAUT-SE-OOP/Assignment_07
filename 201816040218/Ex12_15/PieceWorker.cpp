#include<iostream>

#include<stdexcept>

#include"PieceWorker.h"

using namespace std;

PieceWorker::PieceWorker(const string &first, const string &last, const string &ssn, double wage, double piece)
    : Employee(first, last, ssn)
    {
        setwages(wage);
        setpieces(piece);
    }



void PieceWorker::setpieces( double piece)
{
    if(piece >= 0.0)
        pieces = piece;
    else
        throw invalid_argument("PieceWorker pieces must be > 0.0");
}



double PieceWorker::getpieces() const
{
    return pieces;
}

void PieceWorker::setwages( double wage)
{
    if ( wage > 0.0)
        wages = wage;
    else
        throw invalid_argument("PieceWorker wage must be > 0.0 ");
}

double PieceWorker::getwages() const
{
    return wages;
}



double PieceWorker::earnings() const
{
    return getpieces()*getwages();
}

void PieceWorker::print() const
{
    cout << "PieceWorker employee: ";
    Employee::print();
    cout << "\nwages: " << getwages() << "pieces: " << getpieces();
}
