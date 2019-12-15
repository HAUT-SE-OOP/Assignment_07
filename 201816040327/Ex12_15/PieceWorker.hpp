//
//  PieceWorker.hpp
//  Ex12_15
//
//  Created by misonomayubw on 2019/12/15.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef PieceWorker_hpp
#define PieceWorker_hpp

#include "Employee.hpp"
class PieceWorker:public Employee
{
public:
    PieceWorker(const string &, const string &, const string &,const double =0.0 ,const double =0.0);
    virtual ~PieceWorker(){}
    void setWage(double );
    double getWage() const;
    void setPieces(double );
    double getPieces() const;
    virtual double earnings() const;
    virtual void print();
private:
    double wage; //each piece salary
    double pieces; //the numbers of pieces
};
#endif
