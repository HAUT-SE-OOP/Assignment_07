#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include"Employee.h"

class PieceWorker:public  Employee
{
public:
    PieceWorker(string,string,string,double,double);
    void setWage(double);
    double getWage();
    void setPieces(double);
    double getPiece();
    virtual double earnings();
    virtual void print();
private:
    double wage;
    double pieces;
};



#endif // PIECEWORKER_H_INCLUDED
