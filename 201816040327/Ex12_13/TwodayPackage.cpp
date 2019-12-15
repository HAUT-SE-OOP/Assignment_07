//
//  TwoDayPackage.cpp
//  Ex12_13
//
//  Created by misonomayubw on 2019/12/15.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include "TwoDayPackage.hpp"

TwoDayPackage::TwoDayPackage(const string s,const string r,const string sa,const string ra,
                 const string sc,const string rc,const string ss,const string rs,
                 const string sp,const string rp,const double w,const double o,const double f)

//ini numbers of mem
:Package(s,r,sa,ra,sc,rc,ss,rs,sp,rp,w,o)
{
    //ini fee
     fee=f;
}

double TwoDayPackage::calculateCost()
{
    return weight*fee+Package::calculateCost();//计算总价钱
}
