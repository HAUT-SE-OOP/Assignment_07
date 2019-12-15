#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(const string &first, const string &last, const string &ssn, double Wage, int Piece)
    : Employee(first, last, ssn)
{
    setWage(Wage);
    setPiece(Piece);
}
void PieceWorker::setWage(double Wage)
{
    if(Wage>=0.0)
        wage=Wage;
    else
        throw invalid_argument("Wage must be >= 0.0");
}
double PieceWorker::getWage() const
{
    return wage;
}
void PieceWorker::setPiece(int Piece)
{
    if(Piece>=0)
        piece=Piece;
    else
        throw invalid_argument("Piece must be >= 0");
}
int PieceWorker::getPiece() const
{
    return piece;
}
double PieceWorker::earnings() const
{
    return getWage()*getPiece();
}
void PieceWorker::print() const
{
    cout<<"piece worker:";
    Employee::print();
    cout<<"\nwage: "<<getWage()<<endl;
    cout<<"piece: "<<getPiece()<<endl;
    cout<<"salary: "<<earnings()<<endl;
}