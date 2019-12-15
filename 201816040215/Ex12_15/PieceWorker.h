#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED

#include <string>
#include "Employee.h"
class PieceWoker
{
public:
    PieceWoker( const string &, const string &, const string &,
                     double = 0.0, double = 0.0 );
    virtual ~PieceWoker(){}

    void setPieces( double );
    double getPiece() const;

    void setHour( double );
    double getHour() const;

    virtual double earnings() const override;
    virtual void print() const override;
private:
    double wage;
    int pieces;
};

#endif // HOURLYWORKER_H_INCLUDED


#endif // PIECEWORKER_H_INCLUDED
