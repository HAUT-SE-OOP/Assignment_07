#include<iostream>
#include"PieceWoker.h"
using namespace std;

 PieceWorker::PieceWorker(string first,string last,string ssn,double wage,double pieces)
 :Employee(first,last,ssn)
 {
     setWage(wage);
     setPieces(pieces);
 }
 void PieceWorker::setWage(double wage)
 {
     Wage=wage;
 }
double PieceWorker::getWage()
{
    return Wage;
}
void PieceWorker::setPieces(double pieces)
{
   Pieces=pieces;
}
double PieceWorker::getPieces()
{
    return Pieces;
}
double PieceWorker::earnings()
{
 return Wage*Pieces;

}
void PieceWorker::print()
{
    cout<<"Piece Woker:";
    Employee::print();
   cout<<"\nwage:"<<getWage()<<";pieces:"<<getPieces();

}
