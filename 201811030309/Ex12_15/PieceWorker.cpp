#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"

using namespace std;

/*initializing the firstname, lastname, socialSecurityNumber, wage, pieces*/
PieceWorker::PieceWorker(const string &first, const string &last, const string &ssn,
                         double wa, double pie)
    :Employee(first, last, ssn)
    {
        setWage(wa);
        setPieces(pie);
    }
/*get and set the Wage and the Pieces*/
void PieceWorker::setWage(double wa)
{
    if(wa>0.0)
        wage=wa;
    else
        throw invalid_argument("wage must be > 0.0");
}
double PieceWorker::getWage() const
{
    return wage;
}
void PieceWorker::setPieces(double pie)
{
    if(pie>=0)
        pieces=pie;
    else
        throw invalid_argument("pieces must be >=0");
}
double PieceWorker::getPieces() const
{
    return pieces;
}
/*Redefine pure virtual functions and virtual functions*/
double PieceWorker::earnings() const
{
    return getPieces()*getWage();
}
void PieceWorker::print() const
{
    cout << "pieces worker: ";
    Employee::print();/*reuse the print of the Employee*/
    cout << "\npieces : " << getPieces()
    << "; wage : " << getWage();
}
