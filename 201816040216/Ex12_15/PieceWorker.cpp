#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"// PieceWorker class definition
using namespace std;

// constructor
PieceWorker::PieceWorker(const string first,const string last,const string ssn, double wage,double piece)
  :Employee(first , last , ssn)
{
      setWage(wage);// validate wage
      setpieces(piece);//validate piece
} // end PieceWorker constructor

void PieceWorker::setWage(double wage)
{
    Wage=wage;
}

double PieceWorker::getWage()
{
    return Wage;
}

void PieceWorker::setpieces(double piece)
{
    pieces=piece;
}

double PieceWorker::getpieces()
{
    return pieces;
}

double PieceWorker::earnings()const
{
    return Wage*pieces;
}

void PieceWorker::print()const
{
    cout<<"PieceWorker:";
    Employee::print();
    cout<<"\nPieceWorker's salary:"<<earnings();
}
