#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double wag,double piecesd)
	:Employee(first,last,ssn)
{
	setWage(wag);
	setPieces(piecesd);
}
void PieceWorker::setWage(double wag)
{
	if(wag >= 0.0)
		wage = wag;	
	else
		throw invalid_argument("Wage must be >= 0.0");
}
double PieceWorker::getWage() const
{
	return wage;
}
void PieceWorker::setPieces(double piecesd)
{
	if(piecesd >= 0.0)
		pieces = piecesd;
	else
		throw invalid_argument("Pieces must be >= 0.0");
}
double PieceWorker::getPieces() const
{
	return pieces;
}
double PieceWorker::earnings() const
{
	return getWage()*getPieces();
}
void PieceWorker::print() const
{
	cout<<"Piece Worker: ";
	Employee::print();
	cout<<"\nwage : "<<getWage();
	cout<<"\npieces : "<<getPieces();
} 
