
#include<iostream>
#include"PieceWorker.h"
#include<stdexcept>
using namespace std;

PieceWorker::PieceWorker(const string &a, const string &b, const string &c,double d, int e)
                    :Employee(a,b,c)
{
    setPWage(d);
    setPPieces(e);
}

void PieceWorker::setPWage(double d)
{
    if(d< 0.0)
        PWage=0;
    else
        PWage=d;
}

double PieceWorker::getPWage() const
{
    return PWage;
}

void PieceWorker::setPPieces(int e)
{
    if(e<0)
        PPieces=0;
    else
        PPieces=e;
}

int PieceWorker::getPPieces() const
{
    return PPieces;
}

double PieceWorker::earnings() const
{
    return getPWage()*getPPieces();
}

void PieceWorker::print() const
{
    cout<<"piece worker:";
    Employee::print();
    cout<<endl;
    cout << "the wage of PieceWorker is: " << getPWage() << endl;
    cout << "the pieces of PieceWorker is: " << getPPieces() << endl;
    cout<<"the earnings is:"<<earnings()<<endl;

}
