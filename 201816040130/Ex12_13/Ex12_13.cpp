#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <Package *> packages(2);
    TwoDayPackage package2("Dany","Zhangsan","兰州大学","河南","郑州","723500",3,6,4); //create a TwoDayPackage object
    OvernightPackage package3("LiHua","Bob","四川大学","四川","成都","234500",3,6,5); //create a OvernightPackage object
    packages[0] = &package2;
    packages[1] = &package3;
   cout << "发送者地址：" << packages[0] -> getAddress() << " 接收者地址： " << packages[0] -> getCity() << packages[0] -> getState() << endl;
   cout << "发送者地址：" << packages[1] -> getAddress() << " 接收者地址:  " << packages[1] -> getCity() << packages[1] -> getState() << endl;
   cout << "总费用：" << packages[0] -> calculateCost() + packages[1] -> calculateCost();
    return 0;
}
