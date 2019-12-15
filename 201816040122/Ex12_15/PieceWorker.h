
#ifndef PIECE_H
#define PIECE_H
#include"Employee.h"

class PieceWorker : public Employee
{
public:
    PieceWorker(const string &, const string &, const string &,double = 0.0, int = 0);
    virtual ~PieceWorker() { }
    void setPWage(double );
    void setPPieces(int);
    double getPWage() const;
    int getPPieces() const;
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double PWage;
    int PPieces;
};

#endif
