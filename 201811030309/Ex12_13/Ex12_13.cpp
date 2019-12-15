#include <iostream>
#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <vector>

using namespace std;

int main()
{
    TwoDayPackage twodaypackage("Xiaoming", "Xiaohong", "Pingyu", "ZhongYuanqu", "ZhuMadian", "Zhengzhou",
                                 "Henan", "Henan", "463000", "450000", 20, 0.8, 10);


    OvernightPackage overnightpackage("Xiaoming", "Xiaohong", "Pingyu", "ZhongYuanqu", "ZhuMadian", "Zhengzhou",
                                 "Henan", "Henan", "463000", "450000", 20, 0.8, 0.3);
    vector<Package *>package(2);

    package[0]=&twodaypackage;
    package[1]=&overnightpackage;

    for(size_t i=0; i<package.size(); i++)
    {
        package[i]->print();
    }
}
