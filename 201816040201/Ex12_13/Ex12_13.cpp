#include<bits/stdc++.h>
#include"OvernightPackage.h"
#include"TwoDayPackage.h"
#include"Package.h"
using namespace std;
int main()
{
    vector<package *> packagess(3);
    packagess[0]=new Overnightpackage("宏代劳","ZWT","C03S416","C03S425","郑州","45000",100000,200000,666);
    packagess[1]=new Twodaypackage("宏代劳","ZWT","C03S416","C03S425","郑州","450020",100000,600000,777);
    for(int i=0;i<2;i++)
    {
         cout<<packagess[i]->getmessage()<<endl;
         cout<<packagess[i]->calculateCost()<<endl;
    }

    return 0;
}
