#include<stdexcept>
#include"OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(string a,string b,string c,string d,string e,string f,string g,string h,string i,string j,double ou,double cos,double ni)
:Package(a,b,c,d,e,f,g,h,i,j,ou,cos)
{
    if(ni>0)
        nightcost=ni;
    else
        throw invalid_argument("over night cost must be greater than 0");
}//constructor
double OvernightPackage::calculateCost()
{
    return Package::calculateCost()+nightcost*getOunce();
}//total cost
