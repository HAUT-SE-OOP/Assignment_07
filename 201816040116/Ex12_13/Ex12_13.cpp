#include <iostream>
#include <iomanip>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<Package *>packages(3);   //定义三个三种类的对象
    packages[1]=new Package("Thj","ZhengZhou","Zhy","BeiJing","Beijing","China","100000",10,5);
    cout<<"打印寄件人地址与收件人地址：\n";
    cout<<"寄件人地址："<<packages[1]->getsendaddress()<<"\n"<<"收件人地址："<<packages[1]->getaddress()<<"\n\n";
    cout<<"完整信息：\n";
    packages[1]->display(); //输出基础费用
    packages[2]=new TwoDayPackage("Thj","ZhengZhou","Sxm","ShangQiu","ShangQiu","China","476000",10,5,30);
    cout<<"打印寄件人地址与收件人地址：\n";
    cout<<"寄件人地址："<<packages[2]->getsendaddress()<<"\n"<<"收件人地址："<<packages[2]->getaddress()<<"\n\n";
    cout<<"完整信息：\n";
    packages[2]->display();   //输出两日包裹费用
    packages[3]=new OvernightPackage("Thj","ZhengZhou","Hsg","XuChang","XuChang","China","461000",10,5,5);
    cout<<"打印寄件人地址与收件人地址：\n";
    cout<<"寄件人地址："<<packages[3]->getsendaddress()<<"\n"<<"收件人地址："<<packages[3]->getaddress()<<"\n\n";
    cout<<"完整信息：\n";
    packages[3]->display();    //输出隔夜包裹费用
    return 0;
}
