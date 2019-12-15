#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(const string &first, const string &last, const string &ssn, double w, double p)
:Employee(first,last,ssn)
{
	setWage(w);
	setPieces(p);
}

void PieceWorker::setWage(double w)
{
	if (w>=0.0)
	   wage=w;
	else
	   throw invalid_argument("Wage must be >= 0.0");
}

double PieceWorker::getWage() const
{
	return wage;
}

void PieceWorker::setPieces(double p)
{
	if (p>=0.0)
	   pieces=p;
	else
	   throw invalid_argument("Pieces must be >= 0.0");
}

double PieceWorker::earnings() const
{
	return wage*pieces;
}

void PieceWorker::print() const
{
	cout<<"piece-worker ";
	Employee::print();
	cout<<"Wage："<<getWage();
	cout<<"Pieces: "<<getPieces(); 
}
