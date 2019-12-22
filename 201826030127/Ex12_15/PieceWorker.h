#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include<iostream>
#include"Employee.h"
#include<string>
using namespace std;
class PieceWorker   :public Employee
{
public:
    PieceWorker(const string &,const string &,const string &,double=0.0,double=0.0);
    void setwage(double);
    double getwage()  const;
    void setpieces(double);
    double getpieces() const;
    double earnings();
    void print()  const;
private:
    double wage;
    double pieces;

};



#endif // PIECEWORKER_H_INCLUDED
