#include "PieceWorker.h"
#include <iostream>
PieceWorker::PieceWorker(const string &a,const string &b,const string &c,const int x,const double y):Employee(a,b,c)
{

    pieces=x;
    wage=y;
}
int PieceWorker::getpieces()
{
    return pieces;
}
double PieceWorker::getwage()
{
    return wage;
}
double PieceWorker::earnings()
{

    return wage*pieces;
}
void PieceWorker::print()
{
    cout<<getfirstname()<<" "<<getlastname()<<"总收入="<<earnings()<<"\n社保号为 "<<getsocialnumber()<<endl;
}
