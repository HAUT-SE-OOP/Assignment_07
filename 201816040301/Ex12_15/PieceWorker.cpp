#include<iostream>
#include<stdexcept>
#include"PieceWorker.h"
using namespace std;
PieceWorker::PieceWorker(const string &a,const string &b,const string &c,double d,int e)
   :Employee(a,b,c)
{
    wage=d;
    pieces=e;
}

double PieceWorker::earnings()const
{
    return wage*pieces;//return the data
}

void PieceWorker::print()const
{
    cout<<"PieceWorker employee: ";
    Employee::print();
    cout<<"\nthe wage: "<<wage<<"; the pieces: "<<pieces;
}
