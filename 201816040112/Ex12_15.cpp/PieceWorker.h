#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include "Empolyee.h"
using namespace std;
class PieceWorker : public Employee
{
public:
    PieceWorker(const string &,const string &,const string &,const int,const double);
    double getwage();
    int getpieces();
    virtual double earnings();
    virtual void print();
private:
    int pieces;
    double wage;

};


#endif // PIECEWORKER_H_INCLUDED
