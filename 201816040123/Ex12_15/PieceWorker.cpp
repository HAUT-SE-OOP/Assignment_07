#include"PieceWorker.h"//PieceWorker class definition

using namespace std;

PieceWorker::PieceWorker(const string &first, const string &last,
            const string &ssn,double a, int b)
            :Employee(first,last,ssn)
{
    setWage(a);
    setPieces(b);
}//end PieceWorker constructor

void PieceWorker::setWage(double a)
{
    if(a>=0)
        wage=a;
    else
        {
            cerr<<"wage is wrong"<<endl;
            exit(0);
        }
}

double PieceWorker::getWage() const
{
    return wage;
}

void PieceWorker::setPieces(int b)
{
    if(b>=0)
        pieces=b;
    else
        {
            cerr<<"pieces is wrong"<<endl;
            exit(0);
        }
}

int PieceWorker::getPieces() const
{
    return pieces;
}

double PieceWorker::earnings() const
{
    return getWage()*getPieces();
}//end function earning

void PieceWorker::print() const
{
    cout << "PieceWorker: ";
    Employee::print();
    cout << "\nPieceWorker's wage: " << getWage()
    << " ; PieceWorker's pieces: " << getPieces() << endl;
}//end function print
