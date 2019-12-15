//Ex12_15:PieceWorker.cpp
#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"
using namespace std;

//constructor
PieceWorker::PieceWorker(const string& first, const string& last, const string& ssn, 
	double w, double p)
	:Employee(first, last, ssn)
{
	setWage(w);
	setPieces(p);
}

//set wage
void PieceWorker::setWage(double w)
{
	if (w >= 0.0)
		wage = w;
	else
		throw invalid_argument("Wage must be >= 0");
}

//return wage
double PieceWorker::getWage() const
{
	return wage;
}

//set pieces
void PieceWorker::setPieces(double p)
{
	if (p >= 0.0)
		pieces = p;
	else
		throw invalid_argument("Hours must be >= 0.0");
}

//return pieces
double PieceWorker::getPieces() const
{
	return pieces;
}

//override virtual fuction earnings in Employee
double PieceWorker::earnings() const
{
	return getWage() * getPieces();
}

//print PieceWorker's information
void PieceWorker::print() const
{
	cout << "piece worker: ";
	Employee::print();
	cout << "\nwage: " << getWage();
	cout << "\npieces: " << getPieces();
}
