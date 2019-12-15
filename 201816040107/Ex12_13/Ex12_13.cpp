#include <iostream>
#include <vector>
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include "Package.h"
using namespace std;

int main()
{
    OvernightPackage overNight("Jone","Mary","street1","street2","Califonia","New York","8888",3,5,1);
    TwoDayPackage    twoDay("Jenny","Mike","street3","street4","Berlin","6666","Alabama",5,6,7);
    vector<Package *> packages(2);
    packages[0]=&overNight;
    packages[1]=&twoDay;
    double sum=0;
    for(Package *package:packages)
    {
        cout<<"address of sender:"<<package->getsenderadd()<<endl;
        cout<<"address of receiver:"<<package->getreceiveradd()<<endl;
        cout<<"the price is:"<<package->calculateCost()<<endl;
        sum+=package->calculateCost();
    }
    cout<<"all cost is:"<<sum<<endl;

    return 0;
}
