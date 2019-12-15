#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include <string>
#include "Employee.h"
class PieceWorker : public Employee
{
public:
    PieceWorker(const string &, const string &, const string &,
                double , double);
    virtual ~PieceWorker(){}

    void setWage(double );
    double getWage() const;

    virtual double earnings() const override;
    virtual void print() const override;

    void setPieces(double );
    double getPieces() const;
private:
    double wage;
    double pieces;
};

#endif // PIECEWORKER_H_INCLUDED
