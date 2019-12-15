#include<iostream>

#include"Employee.h"
#include"PieceWorker.h"

using namespace std;


PieceWorker::PieceWorker(double wag, double piece)
	:Employee(wag)
{
	pieces = piece;
}
double PieceWorker::earings()
{
	return getWage() * pieces;
 }