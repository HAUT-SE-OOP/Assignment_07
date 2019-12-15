#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
#include<stdexcept>
using namespace std;
class Package
{
public:
  Package( string ,string ,string ,string ,string ,string,int,double,double );
  void setWei(double);
  double getWei();

  void setAng(double);
  double getAng();

void setaddress(string);
string getaddress();

void setdizhi(string);
string getdizhi();

 void setSum(double);
 double getSum();

 virtual double calculatecost();
  void print();
private:

   string send,receive,di,cheng,zhouu,addresss,address,Dizhi,dizhi;
   int a;

   double b;
   double c;


}; // end class Package

#endif


