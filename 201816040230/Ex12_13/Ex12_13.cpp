#include<iostream>
using namespace std;
#include"Package.h"
#include"OvernightPackage.h"
#include"TwoDayPackage.h"
#include<vector>
int main()
{
     vector<Package*>packagea(4);
    packagea[0]=new OvernightPackage(10 ,"林增瑶","王思婕","青青草原","澧县银谷西苑","内江市","常德市","中国四川省","中国湖南省 ","332332","415500",2,9);
    packagea[1]=new TwoDayPackage(12 ,"林增瑶","王思婕","青青草原","澧县银谷西苑","内江市","常德市","中国四川省","中国湖南省 ","332332","415500",2,9);
    packagea[2]=new OvernightPackage(10 ,"美羊羊","王思婕","羊村","澧县银谷西苑","草原","常德市","中国内蒙古","中国湖南省 ","332111","415500",3,5);
    packagea[3]=new TwoDayPackage(11,"美羊羊","王思婕","羊村","澧县银谷西苑","草原","常德市","中国内蒙古","中国湖南省 ","332111","415500",3,5);
   double sum;
   for (size_t i=0;i<packagea.size();i++)
    {
       packagea[i]->print();
      cout<<packagea[i]->calculateCost()<<endl;
   sum+=packagea[i]->calculateCost();
      cout<<endl;
  }
    cout<<"总费用："<<sum;
return 0;
}
