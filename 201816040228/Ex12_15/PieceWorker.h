#ifndef PIECEWORKER_H
#define PIECEWORKER_H

#include "Employee.h"
#include <string>
using namespace std;

class PieceWorker : public Employee
{
public:
    PieceWorker( const string &, const string & , const string & ,double=0.0, double=0.0);
    virtual ~PieceWorker() {}//virtual destructor

    void setPieceWage( double );
    double getPieceWage() const;

    void setPiece( double );
    double getPiece() const;

    virtual double earnings() const override;
    virtual void print() const override;

private:
    double pieceWage;//piece wage
    double piece;//piece

};

#endif



