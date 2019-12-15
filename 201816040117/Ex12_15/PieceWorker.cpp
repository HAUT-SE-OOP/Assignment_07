#include"PieceWorker.h"
#include <iostream>

PieceWorker::PieceWorker(string f,string l,string s, double w,double p)
:Employee(f,l,s)
{
    setWage(w);
    setPieces(p);
}
void PieceWorker::setWage(double w)
{
    wage=(w>0)?w:0;
}
double PieceWorker::getWage()
{
    return wage;
}
void PieceWorker::setPieces(double p)
{
    pieces=(p>0)?p:0;
}
double PieceWorker::getPiece()
{
    return pieces;
}
double PieceWorker::earnings()
{
    return wage*pieces;
}
void PieceWorker::print()
{
    cout<<"piece worker:";
    Employee::print();
    cout<<"\nwage:"<<getWage()
    <<"\npieces:"<<getPiece();

}
