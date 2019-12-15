#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include "Employee.h"
class PieceWorker : public Employee
{
public:
    PieceWorker( const std::string & , const std::string & , const std::string & , double = 0.0 , double = 0.0 ) ;
    virtual double  earnings() const override;
    virtual void print() const override;
private:
    double wage;
    double pieces;
};


#endif // PIECEWORKER_H_INCLUDED
