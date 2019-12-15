//
//  OvernightPackage.cpp
//  Ex12_13
//
//  Created by misonomayubw on 2019/12/15.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include "OvernightPackage.hpp"
#include "Package.hpp"

OvernightPackage::OvernightPackage(const string s,const string r,const string sa,const string ra,
                 const string sc,const string rc,const string ss,const string rs,
                 const string sp,const string rp,const double w,const double o,const double f)
:Package(s,r,sa,ra,sc,rc,ss,rs,sp,rp,w,o)
//ini
{
    fee=f;
}

 double OvernightPackage::calculateCost()
{
    return weight*fee+Package::calculateCost();
}
