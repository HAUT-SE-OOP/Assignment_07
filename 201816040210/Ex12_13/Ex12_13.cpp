#include<bits/stdc++.h>
#include "OvernightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"
using namespace std;
int main()
{

    TwoDayPackage b( "B","BB","BBB1","BBBB1","BBBBB1","BBBBBB","BBB2","BBBB2","BBBBB2",5,20,10 );//create a TwoDayPackage
    OvernightPackage c( "C","CC","CCC1","CCCC1","CCCCC1","CCCCCC","CCC2","CCCC2","CCCCC2",5,20,4 );//create a OvernightPackage
    vector< Package * > package(6);
    package[0] = &b;
    package[1] = &c;
    package[2] = new TwoDayPackage( "D","DD","DDD1","DDDD1","DDDDD1","DDDDDD","DDD2","DDDD2","DDDDD2",2,10,5 );//create a TwoDayPackage
    package[3] = new OvernightPackage( "E","EE","EEE1","EEEE1","EEEEE1","EEEEEE","EEE2","EEEE2","EEEEE2",3,5,5 );//create a OvernightPackage
    package[4] = new TwoDayPackage( "F","FF","FFF1","FFFF1","FFFFF1","FFFFFF","FFF2","FFFF2","FFFFF2",1,50,50 );//create a TwoDayPackage
    package[5] = new OvernightPackage( "G","GG","GGG1","GGGG1","GGGGG1","GGGGGG","GGG2","GGGG2","GGGGG2",10,3,2 );//create a OvernightPackage

    //print send address receive address and total cost
    for(size_t i=0;i<package.size();++i)
    {
        package[i]->getPackage();
        cout<<"total cost: "<<package[i]->calculateCost()<<"\n"<<endl;
    }
    return 0;
}
