#include <iostream>
#include <stdexcept>
#include"PieceWorker.h"

using namespace std;

PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double w,double p)
      :Employee(first,last,ssn)
{
    setwage(w);
    setpieces(p);
}
void PieceWorker::setwage(double w)
{
    if(w>0)
        wage=w;
    else
        throw invalid_argument("wage must be >0");
}
double PieceWorker::getwage()const
{
    return wage;
}
void PieceWorker::setpieces(double p)
{
    if(p>=0)
        pieces=p;
    else
        throw invalid_argument("pieces must be >=0");
}
double PieceWorker::getpieces()const
{
    return pieces;
}
double PieceWorker::earnings()
{
    return getwage()*getpieces();
}
void PieceWorker::print()
{
    Employee::print();
    cout<<"\npieces Employee wage : "<<getwage()<<"pieces Employee pieces : "<<getpieces()<<endl;
}
