#include<iostream>
#include"PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(string first,string last,string ssn,double a,double b)
    :Employee(first,last,ssn),wage(a),pieces(b)
{

}
void PieceWorker::setwage(double a)
{
    wage = a;
}
double PieceWorker::getwage()
{
    return wage;
}
void PieceWorker::setpieces(double a)
{
    pieces = a;
}
double PieceWorker::getpieces()
{
    return pieces;
}
double PieceWorker::earnings()
{
    return getwage()*getpieces();
}
void PieceWorker::print()
{
    cout<<"PieceWorker employee:";
    Employee::print();
    cout<<"\nwage:"<<getwage()<<";pieces:"<<getpieces();
}
