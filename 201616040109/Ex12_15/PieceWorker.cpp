// Exercise 12.15 Solution:PieceWorker.cpp
//PieceWorker class member-function definitions.
#include<iostream>
#include<stdexcept>
#include"PieceWorker.h"
using namespace std;

//constructor
PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double w,double p)
    : Employee(first,last,ssn)
{
    setWage( w );
    setPieces( p );
}

//set wage
void PieceWorker::setWage(double w)
{
    if(w >= 0.0)
        wage=w;
    else
        throw invalid_argument("wage must be >= 0.0");
}

//return wage
double PieceWorker::getWage() const
{
    return wage;
}

//set pieces
void PieceWorker::setPieces(double p)
{
    if(p >= 0.0)
        pieces=p;
    else
        throw invalid_argument("pieces must be >= 0.0");
}

//return pieces
double PieceWorker::getPieces() const
{
    return pieces;
}

//calculate earnings
//override pure virtual function earnings in Employee
double PieceWorker::earnings() const
{
    return getWage()*getPieces();
}

//print PieceWorker's information
void PieceWorker::print() const
{
    cout << "Piece Worker: ";
    Employee::print();//reuse abstract base-class print function
    cout << ";wage: " << getWage();
    cout << ";pieces: "<< getPieces();
}
