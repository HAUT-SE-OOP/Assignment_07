#include "PieceWorker.h"
#include <iostream>

using namespace std;

PieceWorker::PieceWorker(string f,string l,string s,double w,double p)
:Employee(f,l,s)
{
    wage=w;
    pieces=p;
}

double PieceWorker::getwage()
{
    return wage;
}

double PieceWorker::getpieces()
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
   cout<<"PiecesWorks' salary: "<<earnings()<<endl;
}
