#include<iostream>
#include<vector>
#include<iomanip>
#include<typeinfo>
#include"Package.h"// Package class definition
#include"TwoDayPackage.h"// TwoDayPackage class definition
#include"OvernightPackage.h"// OvernightPackage class definition
using namespace std;
int main()
{
    cout<<fixed<<setprecision(2);
    vector<Package *>packages(3);
 // create vector packages
  // initialize vector with packages
    packages[0]=new Package("sadsa","a","s","b","c",1.0,2.0,3.0);
    packages[1]=new TwoDayPackage("sadsa","a","s","b","c",1.0,2.0,3.0,2.0);
    packages[2]=new OvernightPackage("sadsa","a","s","b","c",1.0,2.0,3.0,3.0);
    cout<<"Consignee:"<<packages[0]->getConsignee()<<"\nShipper:"<<packages[0]->getShipper()<<"\nSIte:"<<packages[0]->getSite()<<"\nPlace:"<<packages[0]->getPlace()<<"nState:"<<packages[0]->getState()<<"\nZIpcode:"<<packages[0]->getZipcode()<<endl;

for ( size_t i = 0; i < packages.size(); i++ )
   {
       if(i=1)
       {
         cout<<"\nTwoDayPackage Fee:"<<packages[i]->calculateCost();
       }
       if(i=2)
       {
           cout<<"\nOvernightPackage Fee:"<<packages[i]->calculateCost();
       }
}
return 0;
}
