#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include <string>//C++ standard string class
#include "Employee.h"
class PieceWorker : public Employee
{
public:
    PieceWorker( const std::string &, const std::string &,
            const std::string &,double = 0.0,double =0.0);
    virtual ~PieceWorker(){}//virtual destructor

    void setWage( double );//set weekly salary
    double getWage() const;//return weekly salary

    void setPieces( double );//set weekly salary
    double getPieces() const;//return weekly salary

    virtual double earnings() const override;//calculate earnings
    virtual void print() const override;//print object
private:
    double wageN;//salary per week
    double piecesN;

};//end class PieceWorker



#endif // PIECEWORKER_H_INCLUDED
