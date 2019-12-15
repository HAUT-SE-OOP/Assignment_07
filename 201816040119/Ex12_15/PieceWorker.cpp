// Lab 2: CommissionEmployee.cpp
// Class CommissionEmployee member-function definitions.
#include <iostream>
using namespace std;

#include "PieceWorker.h" // CommissionEmployee class definition

// constructor
PieceWorker::PieceWorker(
   const string &first, const string &last, const string &ssn,
   double sales, double rate ):Employee(first,last,ssn)
{
   setWage( sales ); // validate and store gross sales
   setPieces( rate ); // validate and store commission rate
} // end CommissionEmployee constructor
// set gross sales amount
void PieceWorker::setWage( double sales )
{
   if( sales >=0.0 )
    wage = sales;
    else
    throw invalid_argument("WAge must be>=0.0");
} // end function setGrossSales

// return gross sales amount
double PieceWorker::getWage() const
{
   return wage;
} // end function getGrossSales

// set commission rate
void PieceWorker::setPieces( double rate )
{
    if( rate > 0.0)
    pieces =rate;
    else
    throw invalid_argument("Weekly salary must be>=0.0and<1.0");
} // end function setCommissionRate

// return commission rate
double PieceWorker::getPieces() const
{
   return pieces;
} // end function getCommissionRate

// calculate earnings
double PieceWorker::earning() const
{
   return wage* pieces;
} // end function earnings

// print CommissionEmployee object
void PieceWorker::print() const
{
   cout << "commission employee: ";
     Employee::print();
     cout << "\ngross sales: " << getWage()
      << "\ncommission rate: " <<getPieces();
} // end function print

