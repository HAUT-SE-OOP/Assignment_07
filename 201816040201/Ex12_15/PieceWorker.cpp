#include<bits/stdc++.h>
#include"PieceWorker.h"

using namespace std;
PieceWorker::PieceWorker(string first,string last,string ssn,double money,double time):
Employee(first,last,ssn)
{
    setwage(money);
    setpieces(time);
}
void PieceWorker::setwage(double x)
{
    wage=x;
}

void PieceWorker::setpieces(double time)
{
   pieces=time;
}
double PieceWorker::getpieces()const
{
    return pieces;
}

double PieceWorker::getwage()const
{
    return wage;
}

double PieceWorker::earnings()const
{
 return getwage()*getpieces();
  //getmoney();
}
void PieceWorker::print()const
{
    cout << "\nPieceWorker employee " ;
    Employee::print();

}

