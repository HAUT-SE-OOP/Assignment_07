#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"//PieceWorker class definition

using namespace std;

PieceWorker::PieceWorker(const string &first,
    const string &last, const string &ssn, double wage, double pieces)
    :Employee( first,last,ssn )
{
    setWage( wage);
    setPieces( pieces );
}//end PieceWorker constructor

void PieceWorker::setWage( double wage)
{
    if( wage >= 0.0)
        wageN = wage;
    else
        throw invalid_argument("wage must be >= 0.0");

}//end function setWeeklySalary

double PieceWorker::getWage() const
{
    return wageN;
}//end function getWeeklySalary

void PieceWorker::setPieces( double pieces)
{
    if( pieces >= 0.0)
        piecesN = pieces;
    else
        throw invalid_argument("pieces must be >= 0.0");

}//end function setWeeklySalary

double PieceWorker::getPieces() const
{
    return piecesN;
}//end function getWeeklySalary


double PieceWorker::earnings() const
{
    return getWage() * getPieces();
}//end function earnings

void PieceWorker::print() const
{
    cout<<"piece worker : ";
    Employee::print();
    cout<<"\nwage: "<<getWage();
    cout<<"\npieces: "<<getPieces();
}//end function print
