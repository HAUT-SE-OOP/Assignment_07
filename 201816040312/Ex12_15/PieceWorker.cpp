#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"

using namespace std;
//constructor
PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double wag,double piece)

:SalariedEmployee(first,last,ssn)
{
    setwage(wag);
    setpieces(piece);

}
void PieceWorker::setweeklysalary()
{
   SalariedEmployee::setweeklysalary(pieces*wage) ;
}//end function setweeklysalary

//return salary
double PieceWorker::getweeklysalary()const
{
    return SalariedEmployee::getweeklysalary();
}//end function getweeklysalary
void PieceWorker::setwage(double wag)
{
    wage=wag;
}
double PieceWorker::getwage()const
{
    return wage;
}

void PieceWorker::setpieces(double piece)
{
    pieces=piece;
    setweeklysalary();
}
double PieceWorker::getpieces()const
{
    return pieces;
}

double PieceWorker::earnings()const
{
    return getwage()*getpieces();
}//end function earning
//print SalariedEmployee's information
void PieceWorker::print()const
{
    cout<<"Piece Worker: ";
    SalariedEmployee::print();
    cout<<"\nwage:"<<getwage()<<"\npieces:"<<getpieces();
    //cout<<"\nweekly salary: "<<earnings();
}//end function print
