#include<iostream>
#include<windows.h>
#include"Package.h"
#include"OvernightPackage.h"
#include"TwoDayPackage.h"
#include<vector>
using namespace std;

int main()
{
    double sum=0;
    system("color f0");//change output interface color
    vector<Package *>packages(2);
    packages[0] = new   OvernightPackage("Jone","D04","NanJing","South","476300","Bob","S417","ZhengZhou","North","123456",2.2,7,0.8);//create class Overnight package object
    packages[1] = new   TwoDayPackage("Jone","D04","NanJing","South","476300","Bob","S417","ZhengZhou","North","123456",2.2,7,10.0);//create class two day package object
    for(Package* packageptr:packages)
    {
        packageptr->print();//print package object message
        sum+=packageptr->calculateCost();
        delete packageptr;
        cout<<endl;
    }
     cout<<"All object fee is "<<sum<<endl;
     return 0;
}//end main function
