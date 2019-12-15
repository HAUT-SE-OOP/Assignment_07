#include <iostream>
#include <iomanip>
#include <vector>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
using namespace std;
void virtuaVipointer(const Package *const);
int main()
{
    Package package("Leno","Lisa","1号楼","郑州","亚洲","12344","2号楼","杭州","亚洲","13213",10.0,2.0);
    OvernightPackage overnightpackage("Bob","Ku","3号楼","焦作","亚洲","213442","4号楼","开封","亚洲","242443",10.0,2.0,2.0);
    TwoDayPackage twodaypackage("Asia","Si","5号楼","马赛马拉","非洲","32434","6号楼","德玛西亚","非洲","3243",10.0,2.0,2.0);
    cout<<fixed<<setprecision(2);
    package.printf();
    cout<<package.calculateCost()<<endl;
    cout<<endl;
    overnightpackage.printf();
    cout<<overnightpackage.calculateCost()<<endl;
    cout<<endl;
    twodaypackage.printf();
    cout<<twodaypackage.calculateCost()<<endl;
    cout<<endl;
    vector<Package *>employees(3);
    employees[0]=&package;
    employees[1]=&overnightpackage;
    employees[2]=&twodaypackage;
    cout<<"循环遍历: "<<endl;
    cout<<endl;
    int sum=0;
    for(const Package *packageptr : employees)
    {
        virtuaVipointer(packageptr);
        sum+=packageptr->calculateCost();
        cout<<endl;
    }
    cout<<"vector中所有Package的总运输费用:"<<sum;
    return 0;
}
void virtuaVipointer(const Package *const baseClassptr)
{
    baseClassptr->printf();
    cout<<baseClassptr->calculateCost()<<endl;
}
