//PieceWorker.cpp
#include "PieceWorker.h"
#include <iostream>
using namespace std;
PieceWorker::PieceWorker(const string &firstName,const string &lastName,const string &ssn,double wage,size_t pieces)
:Employee(firstName,lastName,ssn)
{
    setPieces(pieces);
    setWage(wage);
}
void PieceWorker::setWage(double wage)
{
    if(wage>=0)
        this->wage=wage;
    else
        this->wage=0;
}
double PieceWorker::getWage()const
{
    return wage;
}
void PieceWorker::setPieces(size_t pieces)
{
    if(pieces>=0)
        this->pieces=pieces;
    else
        this->pieces=0;
}
size_t PieceWorker::getPieces()const
{
    return pieces;
}
double PieceWorker::earnings()const
{
    return getWage()*getPieces();
}
