#include <iostream>
#include <stdexcept>
#include "PiecesWorker.h" // SalariedEmployee class definition
using namespace std;

// constructor
PiecesWorker::PiecesWorker( const string &first,
   const string &last, const string &ssn, double wage,double pieces )
   : Employee( first, last, ssn )
{
   setwage(w);
   setpieces(p);
} // end SalariedEmployee constr
void PiecesWorker::setwage(double w)
{
    setwage=w;
}
double PiecesWorker::getwage()
{
    return wage;
}
void PiecesWorker::setpieces(double p)
{
    setpieces=p;
}
double PiecesWorker::getpieces()
{
    return pieces;
}
double PiecesWorker::earnings() const override
{
    return getwage()*getpieces();
}
