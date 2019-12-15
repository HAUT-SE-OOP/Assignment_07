#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include "Employee.h"
#include <string>

class PieceWorker:public Employee
{
public:
    PieceWorker(const std::string &, const std::string &, const std::string &,double=0.0,int=0);//constructor
    virtual ~PieceWorker(){}//destructor
    void setwage(double);
    double getwage()const;
    void setpieces(int);
    int getpieces()const;
    virtual void print()const ;////print worker information
    virtual double earnings()const ;// calculate wage
private:
    double wage;
    int pieces;
};


#endif // PIECEWORKER_H_INCLUDED
