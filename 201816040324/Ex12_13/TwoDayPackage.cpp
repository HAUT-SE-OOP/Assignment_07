#include <iostream>
#include <string>
#include <stdexcept>
#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"
using namespace std ;
TwoDayPackage::TwoDayPackage(const string &s, const string &r,const string &sa, const string &sc, const string &sst,const string &ra, const string &rc, const string &rst,const string &po,double w ,double rat,double co)
:Package(s, r, sa, sc, sst, ra,rc, rst,po, w, rat)
{
    twodaycost=co ;
}
double TwoDayPackage::calculate_Cost()
{
    return twodaycost+Package::calculate_Cost() ;//计算cost之后再加一定价钱
}
void TwoDayPackage::print ()
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
    cout<<"twodaycost : "<<twodaycost<<"\n" ;
    cout<<"pay : "<<calculate_Cost()<<"\n\n\n\n" ;*/
    cout<<"send address      : "<<gets_state()<<" "<<gets_city()<<" "<<gets_address()<<" \n" ;
    cout<<"recipient address : "<<getr_state()<<" "<<getr_city()<<" "<<getr_address()<<" \n" ;
    cout<<"cost              : "<<calculate_Cost()<<" \n\n" ;
}
string TwoDayPackage::gets_address ()
{
    return Package::gets_address() ;
}
string TwoDayPackage::gets_city ()
{
    return Package::gets_city() ;
}
string TwoDayPackage::gets_state ()
{
    return Package::gets_state() ;
}
 string TwoDayPackage::getr_address ()
{
    return Package::getr_address() ;
}
string TwoDayPackage::getr_city ()
{
    return Package::getr_city() ;
}
 string TwoDayPackage::getr_state ()
{
    return Package::getr_state() ;
}
