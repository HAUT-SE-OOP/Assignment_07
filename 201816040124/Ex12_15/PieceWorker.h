#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include<string>
#include"Employee.h"
using namespace std;

class PieceWorker:public Employee
{
public:
    PieceWorker(const string &,const string &,const string &,double=0.0,double=0.0);
    ~PieceWorker(){}
    /*每一件的工资、件数的set和get函数*/
    void setWage(double);
    double getWage()const;
    void setPiece(double);
    double getPiece()const;
    double earnings()const;
    void print()const;
private:
    double wage;//每一件的工资
    double piece;//件数
};
