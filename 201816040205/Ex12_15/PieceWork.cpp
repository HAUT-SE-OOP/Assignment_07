#include <iostream>
#include "Employee.h"
#include "PieceWork.h"
#include <string>
using namespace std;

PieceWorker::PieceWorker(string first, string last,string ssn, double w, int p):Employee(first,last,ssn)
{
 setWage(w);
 setPieces(p);
}
void PieceWorker::setWage(double w)
{
    wage=w;
}

void PieceWorker::setPieces(int p)
{
    pieces=p;
}

double PieceWorker:: getWage()const
{
    return wage;
}

int PieceWorker::getPieces()const
{
    return pieces;
}

double PieceWorker::earnings()const
{
    return getWage()*getPieces();
}
