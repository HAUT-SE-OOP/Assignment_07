#include<bits/stdc++.h>
#include"PieceWorker.h"
using namespace std;



PieceWorker::PieceWorker(const string &first,
        const string &last, const string &ssn,double w,double p)
        :Employee(first,last,ssn)
{
setWage(w);
setPieces(p);
}

void PieceWorker::setWage(double w)
{
    if(w>0)
    wage = w;
}

double PieceWorker::getWage()const
{
    return wage;
}

void PieceWorker::setPieces(double p)
{
    if(p>0)
    pieces = p;
}

double PieceWorker::getPieces()const
{
    return pieces;
}


double PieceWorker::earnings() const
{
    return wage*pieces;
}

void PieceWorker::print()const
{
    cout<<"Piece Employee ";
    Employee::print();
    cout<<"\nearning $: "<<earnings();

}
