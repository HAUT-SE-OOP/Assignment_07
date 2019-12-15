#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED

#include <string> // C++ standard string class
#include "Employee.h" // Employee class definition

class PieceWorker : public Employee
{
public:
   PieceWorker( const std::string &, const std::string &,
      const std::string &, double = 0.0, int = 0, double=0.0);
   virtual ~PieceWorker() { } // virtual destructor

   void setPieceWage( double ); // set pieceWage
   double getPieceWage() const; // return pieceWage

   void setPieces (double ); // set pieces
   double getPieces() const; // return pieces

   void setSalary( double ); // set  salary
   double getSalary() const; // return salary

   // keyword virtual signals intent to override
   virtual double earnings() const override; // calculate earnings
   virtual void print() const override; // print object
private:
   double pieceWage;
   double pieces; 
   double salary;
}; // end class PieceWorker


#endif // PIECEWORKER_H_INCLUDED
