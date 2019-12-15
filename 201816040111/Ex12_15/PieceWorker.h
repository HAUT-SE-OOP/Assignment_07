#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED

#include "Employee.h"
#include <string>

class PieceWorker : public Employee
{
public:
    PieceWorker (  const std::string & , const std::string & , const std::string & , double = 0.0 , double = 0.0 ) ;
    virtual ~PieceWorker() { };
    void setWage( double );
    double getWage() const;

    void setPieces( double );
    double getPieces() const;

    virtual double earnings() const override;//
    virtual void print() const override;
private:
    double wage;
    double pieces;
};

#endif // PIECEWORKER_H_INCLUDED
