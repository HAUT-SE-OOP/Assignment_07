#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED

//PieceWorker.h
#include <string>//C++ standard string class
#include "Employee.h"
using namespace std;

class PieceWorker: public Employee
{
public:
    PieceWorker( const string &, const string &, const string &,
                double = 0.0, int = 0 );
    virtual ~PieceWorker() {} // virtual destructor

    void setWage( double ); //set wage
    double getWage() const; //return wage

    void setPieces( int ); //set pieces
    int getPieces() const; //return pieces

    virtual double earnings() const override;//calculate earnings
    virtual void print() const override; //print object
private:
    double wage; //wage of per package
    int pieces; // the amount of package
};


#endif // PIECEWORKER_H_INCLUDED
