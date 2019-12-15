#include<iostream>
#include"Package.h"
#include"OvernightPackage.h"
#include"TwoDayPackage.h"
#include<vector>
#include<iomanip>

using namespace std;


int main()
{
    vector<Package*> packages(2);

    packages[0] = new TwoDayPackage("jack","a home","linyi",100646,2.5,3.6,0.6);
    packages[1] = new OvernightPackage("mike","a community","zhengzhou",165440,3.6,4.2,0.5);

    for(int i = 0;i<packages.size();i++)
    {
        packages[i]->getname();
        packages[i]->getaddress();
        packages[i]->calculateCost();
    }






    return 0 ;
}










