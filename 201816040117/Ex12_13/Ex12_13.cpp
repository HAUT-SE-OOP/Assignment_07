#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<Package*>package(2);
    package[0]=new OvernightPackage ("Tim","C university","Zhengzhou","Henan","450000","Ki","A university","Hangzhou","Zhejiang","310000",3,3,4);
    package[1]=new TwoDayPackage ("John","B university","Suzhou","Zhejiang","215000","Lisa","D university","Shangqiu","Henan","476000",3,3,6);
    cout<<"overnight package:\n";
    package[0]->print();
    cout<<"overnightPackage cost:"<<package[0]->calculateCost()<<endl;
    cout<<endl;
    cout<<"two day package:\n";
    package[1]->print();
    cout<<"two day package cost:"<<package[1]->calculateCost()<<endl;


}
