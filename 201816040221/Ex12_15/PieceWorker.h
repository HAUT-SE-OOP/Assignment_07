#ifndef HOURLYWORKER_H

#define  HOURLYWORKER_H
#include <string>
#include "Employee.h"
class PieceWorker:public Employee
{
public:
    PieceWorker( const std::string &, const std::string &,
      const std::string &, double = 0.0, double = 0.0 );
   virtual ~PieceWorker() { }
   void setwage(double w);
   double getwage();
   void setpieces(duoble);
   double getpieces();
   virtual double earnings() ; // calculate earnings
   virtual void print() const override; // print object
private:
    double wage;
    double pieces;
};
#endif // COMMISSION_H
