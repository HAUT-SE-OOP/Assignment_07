#include<iostream>
#include"PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(string first,string last,string ssn,double w,double p)
    :Employee(first,last,ssn),wage(w),piece(p)
{

}

void PieceWorker::print()
{
    cout<<"PieceWorker employee:";
    Employee::print();
    cout<<"\nwage:"<<getWage()<<";pieces:"<<getPieces();
}

void PieceWorker::setWage(double w)
{
    this->wage = w;
}

double PieceWorker::getWage()const
{
    return this->wage;
}

void PieceWorker::setPieces(double p)
{
    this->piece = p;
}

double PieceWorker::getPieces()const
{
    return this->piece;
}
double PieceWorker::earnings()
{
    return getWage() * getPieces();
}
