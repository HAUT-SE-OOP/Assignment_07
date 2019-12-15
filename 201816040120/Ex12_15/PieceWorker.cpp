#include <iostream>
#include <stdexcept>
#include <string>
#include "PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(const string &first, const string &last , const string &ssn,
                        double wage, double pieces)
            :Employee(first,last,ssn)
            {
                setPieces(pieces);
                setWage(wage);
            }
double PieceWorker::earnings() const
{
    return getWage() * getPieces();
}

void PieceWorker::print() const
{
    cout << "Piece worker employee: ";
    Employee::print();
    cout <<"; \nPiece worker wage:"<<getWage()
    <<"; Piece worker pieces :"<<getPieces();
}

void PieceWorker::setWage(double wage)
{
    if(wage >=0.0)
        this->wage = wage;
    else
        throw invalid_argument("wage must be >=0.0");
}
double PieceWorker::getWage() const
{
    return wage;
}
void PieceWorker::setPieces(double pieces)
{
    if(pieces >= 0.0)
        this -> pieces = pieces;
    else
        throw invalid_argument("pieces must be >=0.0");
}
double PieceWorker::getPieces() const
{
    return pieces;
}
