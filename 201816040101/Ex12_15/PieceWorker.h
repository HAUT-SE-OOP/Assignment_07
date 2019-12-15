#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include "Employee.h"

class PieceWorker: public Employee
{
public:
    PieceWorker(string , string ,string ,double ,double );
    void setWage(double );
    double getWage( );

    void setPieces(double );
    double getPieces( );

    double earnings( )override;
    void print();
private:
    double wage;//¼þÐ½
    double pieces;

};
#endif
