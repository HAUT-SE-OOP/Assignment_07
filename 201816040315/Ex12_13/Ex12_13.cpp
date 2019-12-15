#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
using namespace std;

int main()
{
    double all=0.0;
    cout<<fixed<<setprecision(2);
    vector <Package*> package(3);//3element vector
    package[0] = new OverNightPackage("tang","LianHua Street 100","Zhengzhou","HeNan","Li","FuLu Nong",
                                      "ChengDu","SiChuan","00000",10.00,10.00,10.00);//initialize
    package[1] = new TwoDayPackage("Li","LianHua Street 100","Zhengzhou","HeNan","Tang","FuLu Nong",
                                      "ChengDu","SiChuan","00000",10.00,10.00,10.00);//initialize
    package[2] = new OverNightPackage("tang","LianHua Street 100","Zhengzhou","HeNan","Li","FuLu Nong",
                                      "ChengDu","SiChuan","00000",10.00,10.00,10.00);//initialize
    for (int i=0;i<3;i++)
    {
        package[i]->print();
        all+=package[i]->calculateCost();
    }
    cout<<"all cost:"<<all;
    return 0;
}
