#include"PieceWorker.h"
#include<iostream>
using namespace std;
PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double w,int p)
  :Employee(first,last,ssn),wage(w),pieces(p){}
double PieceWorker::earnings() const
{   
    return wage*pieces;
}
void PieceWorker::print() const{
    cout<<"piece worker: ";
	Employee::print();
}
