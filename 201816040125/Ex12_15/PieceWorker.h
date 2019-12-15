#ifndef PIECEWORKER_H
#define PIECEWORKER_H

#include<string>
#include "Employee.h"

class PieceWorker: public Employee
{
public:
     PieceWorker(const std::string &,const std::string &,const std::string &,double=0.0,double=0.0);
     virtual ~PieceWorker(){}

     void setWage(double);
     double getWage()const;

     void setPiece(double);
     double getPiece()const;

     virtual double earnings();//const override;
     virtual void print();//const override;
private:
    double wage;
    double pieces;
};
#endif // PIECEWORKER_H
