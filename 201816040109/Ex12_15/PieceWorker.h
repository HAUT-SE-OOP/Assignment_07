#ifndef PIECEWORKER_H
#define PIECEWORKER_H
#include <iostream>
using namespace std;
#include "Employee.h"
class PieceWorker : public Employee
{
public:
    PieceWorker(const string &, const string &, const string &, double = 0.0, int =0);
    virtual ~PieceWorker() {}
    void setWage(double);
    double getWage() const;
    void setPiece(int);
    int getPiece() const;
    virtual double earnings() const override;
    virtual void print() const override;

private:
    double wage; //单件工资
    int piece;   //件数
};
#endif //PIECEWORKER_H