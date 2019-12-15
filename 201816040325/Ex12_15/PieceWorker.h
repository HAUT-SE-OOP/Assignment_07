
#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED

#include "Employee.h"
class PieceWorker:public Employee
{
public:
    PieceWorker(const string &, const string &, const string &,const double =0.0 ,const double =0.0);
    virtual ~PieceWorker(){}
    void setWage(double );//设置wage
    double getWage() const;//返回wage
    void setPieces(double );//设置pieces
    double getPieces() const;//返回pieces
    virtual double earnings() const;//计算工资
    virtual void print();//输出信息
private:
    double wage;//每件的工资
    double pieces;//制造的件数
};
#endif
// PIECEWORKER_H_INCLUDED
