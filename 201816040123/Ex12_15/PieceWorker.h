#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED

#include"Employee.h"//Employee class definition

class PieceWorker: public Employee
{
public:
    PieceWorker( const string & , const string & , const string & , double=0, int=0);
    virtual ~PieceWorker(){}//virtual destructor

    void setWage(double);
    double getWage() const;
    void setPieces(int);
    int getPieces() const;

    //keyword virtual signals intent to override
    virtual double earnings() const override;//calculate earnings
    virtual void print() const override;//print object
private:
    double wage;
    int pieces;
};

#endif // PIECEWORKER_H_INCLUDED
