#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include "Employee.h"

using namespace std;

class PieceWorker : public Employee
{
public:
    /*initializing the firstname, lastname, socialSecurityNumber, wage, pieces*/
    PieceWorker(const string &, const string &, const string &, double=0.0, double=0.0);
    /*get and set the Wage and the Pieces*/
    void setWage(double);
    double getWage() const;
    void setPieces(double);
    double getPieces() const;
    /*Redefine pure virtual functions and virtual functions*/
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double wage;
    double pieces;
};


#endif // PIECEWORKER_H_INCLUDED
