//
//  TwoDayPackage.hpp
//  Ex12_13
//
//  Created by misonomayubw on 2019/12/15.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef TwoDaysPackage_hpp
#define TwoDaysPackage_hpp
#endif
#include "Package.hpp"
class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const string ,const string ,const string ,const string ,const string ,const string ,
            const string ,const string ,const string ,const string ,const double ,const double ,const double );
    // def virtual
    virtual double calculateCost();
private:
    // ini fee
    double fee;
};
