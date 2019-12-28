#ifndef PIECEWORK_H_INCLUDED
#define PIECEWORK_H_INCLUDED

#include "Employee.h"
#include <string.h>
using namespace std;
class PieceWorker: public Employee
{
public:
    PieceWorker(string,string,string,double,int);
    virtual double earnings()const;
    void setWage(double);
    double getWage()const;
    void setPieces(int);
    int getPieces()const;
private:
    double wage;
    int    pieces;
};


#endif // PIECEWORK_H_INCLUDED
