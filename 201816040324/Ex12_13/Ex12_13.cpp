#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include <string>
#include <vector>
using namespace std;

int main()
{
    OvernightPackage o("bob", "mike", "rode1", "beijing", "hebei", "rodel2","jiaocheng ", "shangxi", "030511", 10, 3, 1);
    TwoDayPackage t("ala", "lily", "rode3", "zhenzhou","henan","rode4", "lvliang", "shangxi", "030512", 20, 0.5, 10);
    OvernightPackage o2("zyow", "simple","rode5","taiyuan", "shangxi","rode6", "jingzhon", "shangxi", "030565", 10, 2, 1);
    vector<Package *> p(3) ;
    p[0]= &o ;
    p[1]= &t ;
    p[2]= &o2;
    double allcost=0 ;
    for (int i=0;i<=2;i++)//循环遍历输出打印   计算所有花费
    {
        p[i]->print() ;
        allcost+=p[i]->calculate_Cost() ;
    }
    cout<<"allcost : "<<allcost ;
    return 0;
}
