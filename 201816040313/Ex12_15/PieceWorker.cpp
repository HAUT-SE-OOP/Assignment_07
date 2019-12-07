#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(const string &first, const string &last, const string &ssn,double wa,int pi)//constructor
:Employee(first,last,ssn)
{
    setwage(wa);
    setpieces(pi);
}
void PieceWorker::setwage(double wag)
{
    if(wag>0)
    {
        wage=wag;
    }
    else
    {
        throw invalid_argument("wag must be > 0");
    }
}
double PieceWorker::getwage()const
{
    return wage;
}
void PieceWorker::setpieces(int pie)
{
    if(pie>=0)
    {
        pieces=pie;
    }
    else
    {
        throw invalid_argument("pie must be >= 0 ");
    }
}
int PieceWorker::getpieces()const
{
    return pieces;
}
void PieceWorker::print()const//print worker information
{
    cout<<"pieces worker: ";
    Employee::print();
    cout<<"salary of each piece: "<<getwage()
    <<"\nnumber of pieces manufactured: "<<getpieces();
}
double PieceWorker::earnings()const//calculate wage
{
    return getwage()*getpieces();
}
