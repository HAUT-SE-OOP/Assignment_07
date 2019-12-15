#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>
#include "Package.h"
#include "OvernightPackage.h"
using namespace std ;
OvernightPackage::OvernightPackage(const string &s, const string &r,const string &sa, const string &sc, const string &sst,const string &ra, const string &rc, const string &rst,const string &po,double w ,double rat,double co)
:Package(s, r, sa, sc, sst, ra, rc, rst,po, w, rat)
{
    weightcost=co ;
}
 double OvernightPackage::calculate_Cost()
{
    return Package::getweight()*(Package::getrate()+weightcost) ;//计算时要在每公斤的价钱上再加
}
 void OvernightPackage::print ()
{
    cout << fixed << setprecision( 2 );
    /*cout<<"Recipient name : "<<Package::getrname () <<"\n" ;
    cout<<"send name : "<<Package::getsname() <<"\n" ;
    cout<<"address : "<<Package:: getadd () <<"\n" ;
    cout<<"city : "<<Package:: getci () <<"\n" ;
    cout<<"state : "<<Package:: getsta () <<"\n" ;
    cout<<"poscode : "<<Package:: getpos () <<"\n" ;
    cout<<"weight : "<<Package::getweight ()<<"\n" ;
    cout<<"rate : "<<Package::getrate () <<"\n" ;
    cout<<"addrate : "<<weightcost<<"\n" ;
    cout<<"pay: "<<calculate_Cost ()<<"\n\n\n\n"  ;*/
    cout<<"send address      : "<<gets_state()<<" "<<gets_city()<<" "<<gets_address()<<"\n" ;
    cout<<"recipient address : "<<getr_state()<<" "<<getr_city()<<" "<<getr_address()<<"\n" ;
    cout<<"cost              : "<<calculate_Cost()<<"\n\n" ;

}
string OvernightPackage::gets_address ()
{
    return Package::gets_address() ;
}
 string OvernightPackage::gets_city ()
{
    return Package::gets_city() ;
}
 string OvernightPackage::gets_state ()
{
    return Package::gets_state() ;
}
 string OvernightPackage::getr_address ()
{
    return Package::getr_address() ;
}
string OvernightPackage::getr_city ()
{
    return Package::getr_city() ;
}
string OvernightPackage::getr_state ()
{
    return Package::getr_state() ;
}
