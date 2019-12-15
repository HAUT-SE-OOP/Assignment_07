//
//  HourlyWorker.hpp
//  Ex12_15
//
//  Created by misonomayubw on 2019/12/15.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef HourlyWorker_hpp
#define HourlyWorker_hpp

#include "Employee.hpp"

//def class
class HourlyWorker:public Employee
{
public:
    HourlyWorker(const string &, const string &, const string &,const double =0.0 ,const double =0.0);
    virtual ~HourlyWorker(){}
    void setWage(double );
    double getWage() const;
    void setHours(double );
    double getHours() const;
    virtual double earnings() const;
    virtual void print() ;
private:
    double wage; // hourly salary
    double hours;
};
#endif

