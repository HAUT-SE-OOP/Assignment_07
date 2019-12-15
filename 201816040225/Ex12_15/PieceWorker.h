
#ifndef PIECEWORKER_H
#define PIECEWORKER_H

#include <string> // C++ standard string class

#include "Employee.h" // class definition

class PieceWorker:public Employee
{
public:
   PieceWorker( const std::string &, const std::string &,
      const std::string &, double = 0.0,double=0.0);
      virtual ~PieceWorker(){}
     void setPiece(double);//set piece
     double getPiece()const;//get piece
     void setWage(double);//set wage
     double getWage()const;//get wage
   virtual double earnings() const override; // calculate earnings
   virtual void print() const override; // print  object
private://data member

      double piece;
      double wage;
}; // end class

#endif
