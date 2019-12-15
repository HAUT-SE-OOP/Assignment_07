//PieceWorker.h
#ifndef PIECE_H
#define PIECE_H
#include"Employee.h"

class PieceWorker : public Employee
{
public:
    PieceWorker(const string &first, const string &last, const string &ssn,double = 0.0, int = 0);
    virtual ~PieceWorker() { }
    void setPieceWage(double );
    double getPieceWage() const;
    void setPiecePieces(int );
    int getPiecePieces() const;
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double Wage;
    int Pieces;
};
#endif // PIECE_H
