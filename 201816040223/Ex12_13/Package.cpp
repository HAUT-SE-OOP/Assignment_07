// Member-function definitions for class Package
#include <iostream>
using namespace std;

#include "Package.h" // include definition of class Package

// Package constructor
Package::Package( const string &con,const string &ship,const string &sit,const string &pla,const string &sta,double zip,double wei,double co)
{
   consignee=con;
   shipper=ship;
   site=sit;
   place=pla;
   state=sta;
   setZipcode(zip);
   setWeight(wei);
   setCost(co);
} // end Account constructor

void Package::setConsignee( const string &con )
{
  consignee=con;//
} // end function setConsignee


string Package::getConsignee()const
{
   return consignee;
} // end function getConsignee
void Package::setShipper( const string &ship )
{
  shipper=ship;//
} // end function setShipper


string Package::getShipper()const
{
   return shipper;
} // end function getShipper
void Package::setSite( const string &sit )
{
  site=sit;//
} // end function setSite


string Package::getSite()const
{
   return site;
} // end function getSite
void Package::setPlace( const string &pla )
{
  place=pla;//
} // end function setPlace


string Package::getPlace()const
{
   return place;
} // end function getPlace
void Package::setState(const  string &sta )
{
  state=sta;//
} // end function setState


string Package::getState()const
{
   return state;
} // end function getState
void Package::setZipcode( double zip )
{
  zipcode=zip;//
} // end function setZipcode


double Package::getZipcode()
{
   return zipcode;
} // end function getZipcode
void Package::setWeight(double wei )
{
  weight=wei;//
} // end function setWeight


double Package::getWeight()
{
   return weight;
} // end function getWeight
void Package::setCost( double co )
{
  cost=co;//
} // end function setCost


double Package::getCost()
{
   return cost;
} // end function getCost
double  Package::calculateCost()
{
    return weight*cost;
}
