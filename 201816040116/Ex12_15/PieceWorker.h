#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED

#include<iostream>
#include"Employee.h"
#include"PieceWorker.h"
#include<string>
class PieceWorker : public Employee
{
public:
    PieceWorker(string,string,string,double,double);
    void setwage(double);
    void setpieces(double);
    double getwage();
    double getpieces();
    double earnings();
    void print();
private:
    double wage;
    double pieces;
    double earn;
};
#endif // PIECEWORKER_H_INCLUDED
