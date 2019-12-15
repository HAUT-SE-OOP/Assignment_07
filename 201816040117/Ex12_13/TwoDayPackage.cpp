#include<stdexcept>
#include"TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(string a,string b,string c,string d,string e,string f,string g,string h,string i,string j,double ou,double cos,double po)
:Package(a,b,c,d,e,f,g,h,i,j,ou,cos)
{
    if(po>0)
        postage=po;
    else
        throw invalid_argument("postage must be greater than 0");
}//constructor
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+postage;
}//total cost
