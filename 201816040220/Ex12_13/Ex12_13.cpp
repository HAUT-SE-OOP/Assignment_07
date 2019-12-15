#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{
   vector <Package *>packages(2);
    packages[0] =new TwoDayPackage( "Bob","Jim","Yellowstone","Hollywood","California","Wither",90001,20,5,10); // 创建TwoDayPackage对象
    packages[1] =new OvernightPackage( "Black","Whait","Bronx","New York","State of New York","Cittlen",10041,30,5,0.1); //创建OvernightPackage对象

   for(Package *packagePtr :packages )
   {
       cout<<"sendaddress: "<<packagePtr->getAddress()<<"   "<<
       "receiveaddress: "<<packagePtr->getAddress1()<<endl;

       cout<<packagePtr->calculatecost()<<endl;


   }



  return 0;
}


