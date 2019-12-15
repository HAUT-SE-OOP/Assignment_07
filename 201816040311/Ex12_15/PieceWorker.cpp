//
// Created by Administrator on 2019/12/13.
//
#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"

using namespace std;

PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double wag,int piece)
        :Employee(first,last, ssn)
{
    setwage(wag);
    setpiece(piece);
}

void PieceWorker::setwage(double wages)
{
    if(wages>0)
        wage = wages;
    else
        throw invalid_argument("wage must be >0");
}

//retrieve wage
double PieceWorker::getwage()const
{
    return wage;
}//end
int PieceWorker::getpiece()const
{
    return piece;
}//end
//set piece
void PieceWorker::setpiece(int piece)
{
    if(piece>0)
        piece = piece;
    else
        throw invalid_argument("piece must be >0");
}//end

//calculate earnings
//override pure virtual function earnings in Employee
double PieceWorker::earnings()const
{
    return getwage()*getpiece();
}//end

void PieceWorker::print()const
{
    cout<<"piece worker."<<endl;
    Employee::print();
    cout<<"piece worker salary: "<<earnings();
}//end