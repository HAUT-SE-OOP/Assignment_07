#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include"Employee.h"
using namespace std;
#include<iostream>
class PieceWorker:public Employee
{
public:
     PieceWorker(string,string,string,double,double);
    void setWage(double);
    double getWage();
    void setPieces(double);
    double getPieces();
    virtual double earnings();
    virtual void print();
private:
    double Wage;
    double Pieces;

};
#endif // PIECEWORKER_H
