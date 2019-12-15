#include<iostream>
#include<stdexcept>
#include"PieceWorker.h"
using namespace std;
PieceWorker::PieceWorker(const string &first,const string &last, const string &ssn, double a, int b)
   :Employee(first, last, ssn)
   {
    wage=a;
    pieces=b;
}
double PieceWorker::earnings(){
    double earn;
    earn=wage*pieces;
return earn;
}


    void PieceWorker::print()const
{
    cout<<"PieceWorker employee: ";

    Employee::print();

    cout<<"\nthe wage: "<<wage<<"; the pieces: "<<pieces<<endl;
    cout<<"收入:";
}
