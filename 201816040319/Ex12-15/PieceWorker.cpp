#include <iostream>
#include <cstring>
#include "Employee.h"
#include "PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double w,int p) //definition of class PieceWorker
:Employee(first,last,ssn)
{
    wage = w;
    pieces = p;
}

double PieceWorker::Spening()
{
    return wage * pieces;
}
