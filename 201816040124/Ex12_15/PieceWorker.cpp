#include <iostream>
#include<stdexcept>
#include"PieceWorker.h"
using namespace std;
PieceWorker::PieceWorker(   const string &first, const string &last, const string &ssn,
double w, double p )//初始化数据成员
:Employee(first,last,ssn)
{
    setWage(w);
    setPiece(p);
}
void PieceWorker::setWage(double w)//判断及改变每一件的工资
{
    if(w>=0.0)
        wage=w;
    else
        throw invalid_argument("Wage must be>=0.0");
}
double PieceWorker::getWage()const//返回每一件的工资
{
    return wage;
}
void PieceWorker::setPiece(double p)//判断及改变件数
{
    if(p>=0.0)
        piece=p;
    else
        throw invalid_argument("Piece must be>=0.0");
}
double PieceWorker::getPiece()const//返回件数
{
    return piece;
}
double PieceWorker::earnings()const
{
    return getWage()*getPiece();//计算工资
}
void PieceWorker::print()const//输出信息
{
    cout<<"piece worker:";
    Employee::print();
    cout<<"\nwage:"<<getWage()<<"\npiece:"<<getPiece();
}
