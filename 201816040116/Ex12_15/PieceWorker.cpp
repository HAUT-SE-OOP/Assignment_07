#include<iostream>
#include"Employee.h"
#include"PieceWorker.h"
#include<string>
using namespace std;
PieceWorker::PieceWorker(string f,string l,string s,double w,double p)
                        :Employee(f,l,s)
{
    setwage(w);
    setpieces(p);
}
void PieceWorker::setwage(double w)
{
    if(w<0)
        wage=0;
    else
        wage=w;
}
double PieceWorker::getwage()
{
    return wage;
}
void PieceWorker::setpieces(double p)
{
    if(p<0)
        pieces=0;
    else
        pieces=p;
}
double PieceWorker::getpieces()
{
    return pieces;
}
double PieceWorker::earnings()
{
    earn=wage*pieces;
    return earn;
}
void PieceWorker::print()
{
    cout<<"姓名："<<getFirstName()<<" "<<getLastName()<<"\n"
        <<"身份证号："<<getSocialSecurityNumber()<<"\n"
        <<"工资："<<earnings()<<endl<<"\n";
}
