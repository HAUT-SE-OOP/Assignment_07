//Assignment 12-13
//主函数

#include <iostream>
#include <vector>
#include <iomanip>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

using namespace std;

int main()
{
    vector<Package*>package(3);//creat vector of three base class pointer;

    cout<<fixed<<setprecision(2);
    //set floating_point output formatting

    package[0]=new Package("xiaohong","xiaoming","lainhuajie","zhengzhou","henan","011102030",12.0,11);
    package[1]=new OvernightPackage("xiaoming","xiaohong","dancheng","zhengzhou","henan","02132324",11.0,12,6);
    package[2]=new TwoDayPackage("xiao","da","zhong","henan","zhou","123434415",12,12,13);

    for(int i=0;i<3;i++)
    {
        cout<<"fa: "<<package[i]->getOneName()<<endl;
        cout<<"shou: "<<package[i]->getTwoName()<<endl;
        cout<<"address: "<<package[i]->getAddress()<<endl;
        cout<<"city: "<<package[i]->getCity()<<endl;
        cout<<"zhou: "<<package[i]->getZhou()<<endl;
        cout<<"number: "<<package[i]->getCellectNumber()<<endl;
        cout<<"qian: "<<package[i]->calculateCost()<<endl;
        cout<<endl;
    }

   return 0;

}
