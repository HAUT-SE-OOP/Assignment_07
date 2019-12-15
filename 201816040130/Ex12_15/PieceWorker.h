#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include "Employee.h"
#include <string>
using namespace std;

class PieceWorker:public Employee //definition of class PieceWorker
{
public:
    PieceWorker(const string &,const string &,const string &,double,int); //declare constructor of PieceWorker
   virtual double earnings(); //declare function to earnings
private:
    double wage; //data member wage
    int pieces; //data member pieces
};

#endif // PIECEWORKER_H

