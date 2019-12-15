#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include<string>
#include"Employee.h"

using namespace std;

class PieceWorker:public Employee
{
public:

    PieceWorker(const string &,const string &,
        const string &, double = 0.0,double = 0.0);
    void setwage(double );
    double getwage();

    void setpieces(double );
    double getpieces();

    virtual double earnings()const override;//pure virtual
    virtual void print()const override;

private:
    double wage;
    double pieces;

};


#endif // PIECEWORKER_H
