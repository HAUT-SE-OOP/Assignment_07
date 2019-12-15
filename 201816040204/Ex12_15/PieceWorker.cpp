#include <iostream>
#include"PieceWorker.h"
using namespace std;

PieceWorker :: PieceWorker(const string &first, const string &last, const string &ssn, double w, double p)
:Employee(first, last, ssn)
{
    setWage(w);
    setPieces(p);
}
void PieceWorker :: setWage(double w)
{
    if(w < 0.0)
        throw invalid_argument ("Wage must be >=0.0");
    else
        wage = w;

}
double PieceWorker :: getWage()const
{
    return wage;
}
void PieceWorker :: setPieces(double p)
{
    if(p < 0.0)
        throw invalid_argument("Pieces must be >=0.0");
    else
        pieces = p;
}
double PieceWorker :: getPieces()const
{
    return pieces;
}
double PieceWorker :: earnings()const
{
    return getWage() * getPieces();
}
void PieceWorker :: print()const
{
    cout << "pieces worker: ";
    Employee ::print();
    cout << "\nwage: " << getWage()
    << "; pieces: " <<getPieces();
}
