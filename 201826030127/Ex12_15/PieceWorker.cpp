#include<iostream>
using namespace std;
#include"PieceWorker.h"
PieceWorker::PieceWorker(const string &first,const string &last,const string &ssn,double w,double p);
:Employee(first,lasst,ssn)
 {
     setwage(w);
     setpieces(p);

 }

    void PieceWorker::setwage(double w)
    {
        if(w>=0.0)
            wage=w;

        else
            throw invalid_argument("wage must be in >=0.0";)
    }
    double PieceWorker::getwage()  const
    {
        return wage;
    }
    void PieceWorker::setpieces(double)
    {
        if(p>=0.0)
            pieces=p;
        else
            throw invalid_argument("pieces mst be >=0.0";)
    }
    double PieceWorker::getpieces() const
    {
        return pieces;

    }
    double PieceWorker::earnings()
    {
        return getpieces()*getwage();
    }
 void PieceWorker::print()  const
{
    cout<<"PieceWorker Employee: ";
    Employee::print();
    cout<<"PieceWorker worker Earnings is "
    cout<<earnings();
}
