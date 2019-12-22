#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED

#include <string>
#include"Employee.h"
using namespace std;
class PieceWorker:public Employee
{
public:
    PieceWorker(const string &,const string &,const string &,double=0.0,double=0.0);
    void setwage(double);
    double getwage()const;
    void setpieces(double);
    double getpieces()const;
    virtual double earnings();
    virtual void print() ;
private:
    double wage;
    double pieces;
};
