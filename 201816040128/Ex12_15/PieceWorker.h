#ifndef PIECEWORKER_H
#define  PIECEWORKER_H
#include<string>
#include"Employee.h"
#include"PieceWorker.h"

using namespace std;
class PieceWorker :public Employee {
public:
	PieceWorker(double, double);
	virtual double earings() override;
private:
	double pieces;
};
#endif 
