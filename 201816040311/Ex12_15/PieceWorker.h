//
// Created by Administrator on 2019/12/13.
//

#ifndef EX12_15_PIECEWORKER_H
#define EX12_15_PIECEWORKER_H

#include <string>
#include "Employee.h"
using namespace std;


class PieceWorker:public Employee{
public:
    PieceWorker(const string&,const string &,const string &,double=0.0,int=0);
    virtual ~PieceWorker(){};

    void setwage( double );
    double getwage()const;

    void setpiece( int );
    int getpiece()const;
    virtual double earnings()const override;
    virtual void print()const override;
private:
    double wage;
    int piece;

};


#endif //EX12_15_PIECEWORKER_H
