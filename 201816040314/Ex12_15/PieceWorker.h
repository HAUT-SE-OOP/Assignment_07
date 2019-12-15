//PieceWorker.h
#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include <string>
#include "Employee.h"
class PieceWorker:public Employee
{
public:
    PieceWorker(const std::string &,const std::string &,const std::string &,double,size_t);
    virtual ~PieceWorker(){}
    void setWage(double);
    double getWage()const;
    void setPieces(size_t);
    size_t getPieces()const;
    double earnings()const override;
private:
    double wage;
    size_t pieces;
};


#endif // PIECEWORKER_H_INCLUDED
