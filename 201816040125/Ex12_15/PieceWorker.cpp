#include<iostream>
#include<stdexcept>
#include "PieceWorker.h"

using namespace std;

PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double x,double y)
:Employee(first,last,ssn)
{
    setWage(x);
    setPiece(y);
}

void PieceWorker::setWage(double x)
{
    if(x>=0.0)
        wage=x;
    else
        throw invalid_argument("wage must be >=0.0");
}

double PieceWorker::getWage()const
{
    return wage;
}

void PieceWorker::setPiece(double y)
{
    if(y>=0.0)
        pieces=y;
    else
        throw invalid_argument("piece must be >= 0.0");
}

double PieceWorker::getPiece()const
{
    return pieces;
}


double PieceWorker::earnings()
{
    return getWage()*getPiece();
}


void PieceWorker::print()
{
    cout<<"Piece worker: ";
    Employee::print();
    cout<<"\n wage: "<<getWage();
}
