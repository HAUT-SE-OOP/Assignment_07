#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include"Employee.h"
#include<string>

class PieceWorker : public Employee
{
public:
    PieceWorker(const string &, const string &, const string &, double = 0.0, double = 0);
    virtual double earnings() const override;
    virtual void print() const override;
    double getWage() const;
    double getPiece() const;

private:
    double wage;
    int pieces;
};


#endif // PIECEWORKER_H


