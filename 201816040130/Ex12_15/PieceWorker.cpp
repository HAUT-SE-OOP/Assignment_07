#include <iostream>
#include <string>
#include "Employee.h"
#include "PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double w,int p) //definition of class PieceWorker
:Employee(first,last,ssn)
{
    wage = w;
    pieces = p;
}

double PieceWorker::earnings() //define function to PieceWorker
{
    return wage * pieces;
}
