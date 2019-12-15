#include <iostream>

#include <iomanip>

using namespace std;



#include <vector>



#include "Package.h"

#include "TwoDayPackage.h"

#include "OvernightPackage.h"

#include <stdexcept>



int main()


{

vector<Package *>package(2);


  Package P("Dy", "school","zhengzhou", "china", "456778", "bei", "handan", "hjf", "china","65787", 5.0, 2.0);

     package[0]=new TwoDayPackage ( "Dy", "school","zhengzhou", "china", "456778", "ei", "hdan", "hjf", "china","65787", 5.0, 2.0,1.0); // 创建TwoDayPackage对象

    package[1]=new OvernightPackage( "y", "shool","zhenzhou", "cina", "45678", "bi", "hadan", "jf", "cina","6577", 5.0, 2.1,1.1); //创建OvernightPackage对象






       P.print();//打印输出
       cout<<P.caculateCost();

   cout<<endl;


   for(size_t i = 0; i <= package.size(); i++ )
   {
       package[i]->print();
       cout<<package[i]->caculateCost()<<endl;
   }






  return 0;

}
