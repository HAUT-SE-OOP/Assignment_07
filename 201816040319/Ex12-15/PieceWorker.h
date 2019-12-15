#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include "Employee.h"
#include <string>
using namespace std;

class PieceWorker:public Employee
{
public:
    PieceWorker(const string &,const string &,const string &,double,int); //declare constructor of PieceWorker
   virtual double Spening();
private:
    double wage; //data member wage
    int pieces; //data member pieces
};

#endif // PIECEWORKER_H
