#include <iostream>
#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <vector>
#include <typeinfo>
using namespace std;
/*-Henan-Zhengzhou-Henan university of technology*/
int main()
{
  vector<Package *> packages(2);
  packages[0] = new TwoDayPackage( "Tom","June","Cambridge MA 0213","MH","USA","China-Henan-Zhengzhou-Henan university of technology",121315,100,2,20);
   /*TwoDayPackage package1( "Tom","June","Cambridge MA 0213","MH","USA","China-Henan-Zhengzhou-Henan university of technology",021315,100,2,20);
   package1.print();
   cout<<endl;*/
  packages[1] = new OvernightPackage( "Susan","Joy","Huntington Beach","CA","USA","China-Henan-Zhengzhou-Henan university of technology",926477,44,4,0.8);

   /*OvernightPackage package2( "Susan","Joy","Huntington Beach","CA","USA","China-Henan-Zhengzhou-Henan university of technology",926477,44,4,0.8);
   package2.print();*/
   for(Package *PackagePtr : packages)
   {
       cout<<"发件人地址："<<PackagePtr->getdizhi()<<endl;
       cout<<"收件人地址："<<PackagePtr->getaddress()<<endl;
       cout<<"总费用："<<PackagePtr->calculatecost()<<endl<<endl;
    // PackagePtr-> print();
   }

  return 0;
}


