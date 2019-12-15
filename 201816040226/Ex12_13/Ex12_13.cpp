#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

#include "Package.h" // Package class definition
#include "TwoDayPackage.h" // TwoDayPackage class definition
#include "OvernightPackage.h" // OvernightPackage class definition

int main()
{
   Package package1( "yyqx","qx","HuBei","Huaihua","qqcaoyuan",1234,50.0,1.0 ); // create Account object
   TwoDayPackage package2("yyqx","qx","HuBei","Huaihua","qqcaoyuan",1234,50.0,1.0,2.0);// create SavingsAccount object
   OvernightPackage package3("yyqx","qx","HuBei","Huaihua","qqcaoyuan",1234,50.0,1.0,2.0); // create CheckingAccount object

   /*package1.print();
   cout<<endl;
   cout<<endl;
   package2.print();
   cout<<endl;
   cout<<endl;
   package3.print();*/

   vector<Package * >packages(3);
    packages[0]=&package1;
    packages[1]=&package2;
    packages[2]=&package3;
    cout<<endl;
   for(int i=0;i<packages.size();i++)
   {
       packages[i]->print();
       cout<<endl<<endl;
   }
}
