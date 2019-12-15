//PieceWorker.cpp
//Abstract-base-class HourlyWorker member-function definitions
//Note: No definitions are given for pure virtual functions
#include <iostream>
#include <string>
#include "PieceWorker.h"
using namespace std;

//constructor
PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double Wage,double Pieces)
    :Employee(first,last,ssn)
{
    setWage(Wage);
    setPieces(Pieces);
}
//set wage
void PieceWorker::setWage(double Wage)
{
    if(Wage>0.0)
        wage=Wage;
    else
        wage=0;
}
//return wage
double PieceWorker::getWage()const
{
    return wage;
}
//set pieces
void PieceWorker::setPieces(double Pieces)
{
    if(Pieces>0.0)
        pieces=Pieces;
    else
        pieces=0;
}
//return pieces
double PieceWorker::getPieces()const
{
    return pieces;
}
//override virtual function earnings in Employee
double PieceWorker::earnings()
{
    return wage*pieces;
}
//print PieceWorker's information
void PieceWorker::print()
{
    cout<<"\npieces workers: ";
    Employee::print();
    cout<<"\nPieces: "<<getPieces()<<"\nWage: "<<getWage();
}
