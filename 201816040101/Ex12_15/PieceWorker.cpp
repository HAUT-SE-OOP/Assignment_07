#include "PieceWorker.h"
#include <stdexcept>
#include <iostream>
using namespace std;

PieceWorker::PieceWorker(string first ,string last, string ss,double w,double p)
      :Employee(first ,last ,ss)
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
double PieceWorker::earnings()
{
    return wage*pieces;
}
void PieceWorker::print()
{
    Employee::print();
    cout<<"\nthe wage is : "<<wage;
    cout<<"\nthe pieces is : "<<pieces;
    cout<<"\nthe earnings is : "<<earnings();
}
