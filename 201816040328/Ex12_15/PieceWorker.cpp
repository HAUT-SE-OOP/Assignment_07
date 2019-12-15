#include <iostream>
#include <stdexcept>
#include"Employee.h"
#include "PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,
					double a,double b)
	: Employee(first,last,ssn)
{
	setwage(a);
	setpiece(b);
}

void PieceWorker::setwage(double c)
{
    if(c>0.0)
        wage=c;
    else
        throw invalid_argument("wage must be > 0.0");
}

double PieceWorker::getwage()
{
    return wage;
}

void PieceWorker::setpiece(double d)
{
  if(d>0.0)
        piece=d;
    else
        throw invalid_argument("piece must be > 0.0");
}
double  PieceWorker::getpiece()
{
    return piece;
}
double PieceWorker::earnings()const
{
    return wage*piece;
}
void PieceWorker::print()  const
{
    cout<<"PieceWorker:";
    Employee::print();
    cout<<"\nPieceWorker wage:"<<wage<<"\nPieceWorker piece:"<<piece;

}
