

#include "PieceWorker.h"
#include <iostream>

using namespace std;

PieceWorker::PieceWorker(const string &first, const string &last, const string &ssn,
      const double w,const double p)
      :Employee(first,last,ssn)
      {
          wage=w;
          pieces=p;
      }
void PieceWorker::setWage(double w)
{
    wage=w;
}

double PieceWorker::getWage() const
{
    return wage;
}

double PieceWorker::getPieces() const
{
    return pieces;
}

void PieceWorker::setPieces(double p)
{
    pieces=p;;
}

double PieceWorker::earnings() const
{
    return wage*pieces;
}

void PieceWorker::print()
{
    cout <<"Pieces Worker: ";
   Employee::print();
   cout<<"\nPieces salary: "<<earnings();
}
