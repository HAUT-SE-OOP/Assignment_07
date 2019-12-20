// Fig. 12.9: Employee.h
// Employee abstract base class.
#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include "Employee.h"
#include <string> // C++ standard string class
class PieceWorker : public Employee
{
 public:
    PieceWorker(const std::string &, const std::string &,
 const std::string &,double wage1,int piece);
    virtual double earnings() const override;
    virtual void print() const override;
 private:
     double wage;
     int pieces;

}; // end class Employee

#endif // PIECEWORKER_H
