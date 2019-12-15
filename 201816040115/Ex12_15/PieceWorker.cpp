//PieceWorker.cpp
#include<iostream>
#include"PieceWorker.h"
#include<stdexcept>
using namespace std;

PieceWorker::PieceWorker(const string &first, const string &last, const string &ssn,
                             double wage, int pieces)
                    :Employee(first,last,ssn)
{
    setPieceWage(wage);
    setPiecePieces(pieces);
}

void PieceWorker::setPieceWage(double wage)
{
    if(wage>= 0.0)
        pieceWage=wage;
    else
        throw invalid_argument("pieceWage must be >= 0.0");
}

double PieceWorker::getPieceWage() const
{
    return pieceWage;
}

void PieceWorker::setPiecePieces(int pieces)
{
    if(pieces>=0)
        piecePieces=pieces;
    else
        throw invalid_argument("piecePieces must be >=0");
}

int PieceWorker::getPiecePieces() const
{
    return piecePieces;
}

double PieceWorker::earnings() const
{
    return getPieceWage()*getPiecePieces();
}

void PieceWorker::print() const
{
    cout << "PieceWorker: ";
    Employee::print();
    cout << "\nPieceWorker's wage: " << getPieceWage() << endl;
    cout << "PieceWorker's pieces: " << getPiecePieces() << endl;

}


