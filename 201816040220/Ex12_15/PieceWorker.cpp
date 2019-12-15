#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(string first,string last,string ssn,double salary,int rate)
 :Employee(first,last,ssn)
{
    setSalary(salary);
    setPiece(rate);
}

void PieceWorker::setSalary(double salary)
{
   wage=salary;
}

double  PieceWorker::getSalary() const
{
    return wage;
}

void PieceWorker::setPiece(int rate)
{
   pieces=rate;
}

int PieceWorker::getPiece() const
{
    return  pieces;
}

double  PieceWorker::earnings()
{
    return getSalary()*getPiece();
}

void  PieceWorker::print()
{
    cout<<"PieceWork employee: ";
    Employee::print();
    cout<<"\none sales: "<<getSalary()
    <<";piece: "<<getPiece()<<"\ntotal sales: "<<earnings();
}
