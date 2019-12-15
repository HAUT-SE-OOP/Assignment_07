#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED

#include <string>
#include "Employee.h"
using namespace std;

class PieceWorker:public Employee
{
public:
    PieceWorker(const string &, const string & , const string & ,double =0.0 , double = 0.0);
    virtual ~PieceWorker(){}

    void setpieces(double);
    double getpieces() const;

    void setwages(double);
    double getwages() const;

    virtual double earnings() const override;
    virtual void print() const override;
private:
    double wages;
    double pieces;
};




#endif // PIECEWORKER_H_INCLUDED
