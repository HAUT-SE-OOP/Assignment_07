#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include "Employee.h"
#include <string> // C++ standard string class
using namespace std;

class PieceWorker:public Employee
{
public:
   PieceWorker( const string &, const string &, const string &,
      double = 0.0, double = 0.0 );
   virtual ~PieceWorker(){}

   void setWage( double ); // set Wage
   double getWage() const; // return Wage
   void setPieces(double);
   double getPieces()const;

   virtual double earnings()const; // calculate earnings
   virtual void print(); // print CommissionEmployee object
private:
   double Wage; // Wage
   double Pieces; // pieces
}; // end class PieceWorker


#endif // PIECEWORKER_H_INCLUDED
