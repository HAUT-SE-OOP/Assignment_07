#include"PieceWorker.h"
#include<iostream>
using namespace std;

PieceWorker::PieceWorker(const string &first,const string &last,
const string &ssn,double w,double p )
:Employee(first,last,ssn)
{
    setwage(w);
    setpieces(p);
}

void PieceWorker::setwage(double w)
{
    wage = w;
}
double PieceWorker::getwage()
{
    return wage;
}
void PieceWorker::setpieces(double p)
{
    pieces = p;
}
double PieceWorker::getpieces()
{
    return pieces;
}
double PieceWorker::earnings()const
{
    return wage * pieces;
}
void PieceWorker::print()const
{
    cout<<"PieceWorker:";
    Employee::print();// reuse abstract base-class pr¨ªnt function
    cout<<"\n earnings:"<< earnings();

}


