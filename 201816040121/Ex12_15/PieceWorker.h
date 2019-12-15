//Ex12_15:PieceWorker.h
//PieceWorker class derived from Employee.
#include <string>
#include "Employee.h"
using namespace std;
#ifndef PIECEWORKER_H
#define PIECEWORKER_H
class PieceWorker : public Employee
{
public:
	PieceWorker(const string&, const string&, const string&, double = 0.0, double = 0.0);//constructor
	virtual ~PieceWorker(){}//virtual destrcutor

	void setWage(double);//set wage
	double getWage() const;//return wage
	void setPieces(double);//set pieces
	double getPieces() const;//return pieces

	virtual double earnings() const override;//calaulate earnings
	virtual void print() const override;//print object

private:
	double wage;
	double pieces;
};
#endif // !PIECEWORKER_H

