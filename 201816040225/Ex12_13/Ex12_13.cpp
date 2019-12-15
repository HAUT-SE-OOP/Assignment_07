#include<iostream>
#include<iomanip>
#include <vector>
#include"Package.h"//class
#include"TwoDayPackage.h"//class
#include"OvernightPackage.h"//class
using namespace std;
int main()
{
    vector<Package *>packages(3);
    packages[0]=new Package("上海","刘雨萌","长江路","南阳","亚洲","1000",30.00,14.00);
    packages[1]=new TwoDayPackage("广州","张贞","财富港","信阳","亚洲","2000",10.00,10.00,5.20);
    packages[2]=new OvernightPackage("沈阳","乔义刚","成都","四川","亚洲","3000",5.00,5.00,12.00);
    cout<<fixed<<setprecision(2);
    for(size_t i=0;i<packages.size();i++)
    {
       packages[i]->print();
    }
}



