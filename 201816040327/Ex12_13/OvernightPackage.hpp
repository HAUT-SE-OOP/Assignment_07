//
//  OvernightPackage.hpp
//  Ex12_13
//
//  Created by misonomayubw on 2019/12/15.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#ifndef OvernightPackage_hpp
#define OvernightPackage_hpp

#include <stdio.h>
#include "Package.hpp"

class OvernightPackage:public Package
{
public:
    OvernightPackage(const string ,const string ,const string ,const string ,const string ,const string ,
            const string ,const string ,const string ,const string ,const double ,const double ,const double );
    //virtual function
    virtual double calculateCost();
private:
    double fee;
};

#endif /* OvernightPackage_hpp */
