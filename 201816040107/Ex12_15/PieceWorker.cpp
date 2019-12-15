#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"
PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double w,double p)
:Employee(first,last,ssn)
{
    setWage(w);
    setPieces(p);
}
void PieceWorker::setWage(double w)
{
    wage=w;
}
double PieceWorker::getWage()
{
    return wage;
}
void PieceWorker::setPieces(double p)
{
    pieces=p;
}
double PieceWorker::getPieces()
{
    return pieces;
}
double PieceWorker::earnings() const
{
    return wage*pieces;
}
void PieceWorker::print() const
{
    cout<<"PieceWorker:";
    Employee::print();
    cout<<"\nwage:"<<getWage();
    cout<<"\npieces:"<<getPieces();
}
