//PieceWorker.cpp
#include <iostream>
#include <string>
#include "PieceWorker.h"
using namespace std;

//constructor
PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double Wage,int Pieces)
   :Employee(first,last,ssn)
{
    wage=Wage;
    pieces=Pieces;
}//end PieceWorker constructor

double PieceWorker::earnings()const
{
    return wage*pieces;
}

void PieceWorker::print()const
{
    Employee::print();
    cout<<"earning is :$"<<earnings();
}
