#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED

#include <string>//C++ standard string class
#include "Employee.h"
using namespace std;

class PieceWorker: public Employee
{
public:
    PieceWorker( const string &, const string &, const string &,
                       double = 0.0, double = 0.0 );
    virtual ~PieceWorker() {} // virtual destructor
    void setwage(double);
    double getwage();

    void setpieces(double);
    double getpiece();
    virtual double earnings() const override;//calculate earnings
    virtual void print() const override; //print object
private:
    double pieces;
    double wage;

#endif // PIECEWORKER_H_INCLUDED
