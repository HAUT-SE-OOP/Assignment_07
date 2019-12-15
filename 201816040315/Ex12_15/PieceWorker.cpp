//PieceWorker.h
//Piece Worker class member function definition
#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"
using namespace std;

//constructor
PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double wages,int piece)
    :Employee(first,last, ssn)
{
    setWage(wages);
    setPieces(piece);
}//end constructor

//set wage
void PieceWorker::setWage(double wages)
{
    if(wages>0)
        wage = wages;//store wage
    else
        throw invalid_argument("wage must be >0");
}//end function set wage

//retrieve wage
double PieceWorker::getWage()const
{
    return wage;
}//end

//set piece
void PieceWorker::setPieces(int piece)
{
    if(pieces>0)
        pieces = piece;
    else
        throw invalid_argument("piece must be >0");
}//end

//retrieve piece
int PieceWorker::getPieces()const
{
    return pieces;
}//end

//calculate earnings
//override pure virtual function earnings in Employee
double PieceWorker::earnings()const
{
    return getWage()*getPieces();
}//end

void PieceWorker::print()const
{
    cout<<"piece worker."<<endl;
    Employee::print();
    cout<<"piece worker salary: "<<earnings();
}//end
