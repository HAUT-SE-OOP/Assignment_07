// Exercise 12.15 Solution:PieceWorker.h
//PieceWorker class derived from Employee
#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include"Employee.h"
#include<string>
#include<iostream>
using namespace std;

class PieceWorker : public Employee
{
public:
     PieceWorker(const string &,const string &,const string &,double = 0.0,double = 0.0);
     virtual ~PieceWorker(){ }//virtual destructor

     void setWage( double );//set wage
     double getWage()const;//return wage

     void setPieces( double );//set piece
     double getPieces() const ;//return piece

     virtual double earnings()const override;//calculate earnings
     virtual void print() const override;//print object
private:
    double wage;
    double pieces;
};

#endif // PIECEWORKER_H
