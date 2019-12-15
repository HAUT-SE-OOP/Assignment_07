#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"// PieceWorker class definition
using namespace std;
// constructor
PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn, double wag,double pie)
  :Employee(first , last , ssn)
{
      setWage(wag);// validate wage
      setPieces(pie);//validate piece
} // end PieceWorker constructor

void PieceWorker::setWage(double wag)
{
    wage=wag;
}
double PieceWorker::getWage()const
{
    return wage;
}
void PieceWorker::setPieces(double pie)
{
    pieces=pie;
}
double PieceWorker::getPieces()const
{
    return pieces;
}
// calculate earnings
double PieceWorker::earnings()const
{
    return wage*pieces;
}// end function earnings
// print PieceWorker object
void PieceWorker::print()const
{
    cout <<"salaried employee:";
    Employee::print();
    cout << "\nWage is:" << getWage();
    cout << "\nPieces is:" << getPieces();
} // end function print
