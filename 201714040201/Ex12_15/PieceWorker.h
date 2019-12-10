//PieceWorker.h
//PieceWorker abstract base class
#ifndef PIECEWORKER_H
#define PIECEWORKER_H

#include <string>//c++ standard string class
#include "Employee.h"
using namespace std;

class PieceWorker:public Employee
{
public:
    PieceWorker(const string &,const string &,const string &,double ,double );//constructor
    virtual ~PieceWorker(){}//virtual destructor
    void setWage(double );//set wage
    double getWage()const;//return wage
    void setPieces(double );//set pieces
    double getPieces()const;//return pieces
    virtual double earnings()  override;//override virtual function earnings in Employee
    virtual void print() override;//print PieceWorker's information
private:
    double pieces;
    double wage;
};


#endif // PIECEWORKER_H
