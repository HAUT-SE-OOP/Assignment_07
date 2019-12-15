#include<iostream>
#include <string>
#include "Employee.h"
#include "PieceWorker.h"

using namespace std;

PieceWorker::PieceWorker(const string &n1,const string &n2,const string &n3,double w,int p)
:Employee(n1,n2,n3)
{
    wage=w;
    pieces=p;
}

double PieceWorker::earnings(double w,int p)
{
    return w*p;
}
