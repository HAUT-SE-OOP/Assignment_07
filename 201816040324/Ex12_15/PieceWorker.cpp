#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"
using namespace std ;

PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn, double p, double w)
  :Employee(first , last , ssn)
{
      setpieces(p);
      setwage(w) ;
}
void PieceWorker::setwage(double w)
{
    if(w>=0.0)
        wage=w;
    else
        throw invalid_argument("wage must be >= 0.0");
}
void PieceWorker::setpieces(double h)
{
    if(h>=0.0)
        pieces=h;
    else
        throw invalid_argument("pieces must be >= 0.0");
}//set  pieces
double PieceWorker::getwage()const
{
    return wage;
}
double PieceWorker::getpieces()const
{
    return pieces;
}
double PieceWorker::earnings()const
{

        return pieces*wage;

}//计算工资
void PieceWorker::print()const
{
    cout <<"piece woker:";
    Employee::print();
    cout << "\npieces:" << getpieces()
    <<"; wage: "<<getwage() ;
}
