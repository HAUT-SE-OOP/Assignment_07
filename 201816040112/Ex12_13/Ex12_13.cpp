#include <iostream>
#include <vector>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OverNightPackage.h"
using namespace std;

int main()
{
    vector<package*> res(2);
    int sum=0;
    res[0]=new tdpack("bob","Alice","New York","Las","110","111",10,15,20);
    res[1]=new onpack("bob","Alice","Washington","New York","110","111",10,15,1);
    for(int i=0;i<2;i++){

        cout<<"从"<<res[i]->getscity()<<"发送到"<<res[i]->getgcity();
        sum+=res[i]->calcuateCost();
        cout<<"  此时这个包裹的费用为"<<res[i]->calcuateCost()<<endl;

    }
    cout<<"所有包裹的总费用为"<<sum;
    return 0;
}
