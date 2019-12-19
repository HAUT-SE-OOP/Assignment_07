#include "Employee.h"
using namespace std;

#ifndef PIECEWORKER_H
#define PIECEWORKER_H

class PieceWorker :public Employee {
public:
	PieceWorker() :Employee() {}
	PieceWorker(double wage, int pieces) :wage(wage), pieces(pieces) {}
	double earnings();
private:
	double wage;
	int pieces;
};

#endif // !PIECEWORKER_H
