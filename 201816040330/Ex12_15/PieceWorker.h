#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED


#include<iostream>
#include <string>

using namespace std;

class PieceWorker
{
public:
    explicit PieceWorker(const string &,const string &,const string &,double,int);
    double earnings(double,int);
private:
    double wage;
    int pieces;
};

#endif // PIECEWORKER_H_INCLUDED
