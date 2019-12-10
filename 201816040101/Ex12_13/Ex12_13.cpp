#include <iostream>
#include <stdexcept>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<Package*>package(3);
    package[0]=new Package("yhk","fangzi","luoyang","zhengzhou","123","123",2,3);
    package[1]=new TwoDayPackage ("lulu","xixi","xinxiang","zhengzhou","456","456",4,5,6);
    package[2]=new  OvernightPackage ("xiaoming","a0~","mamyamg","zhengzhou","789","789",7,8,9 );//creat object

     for(size_t i=0;i<package.size(); ++i)
     {
             cout<<"the message of package[ "<< i <<" ]"<<endl;
             cout<<"the from name is : "<<package[i]->getfromName()<<endl;
             cout<<"the to name is : "<<package[i]->gettoName()<<endl;
             cout<<"the weight is : "<<package[i]->getWeight()<<endl;
             cout<<"the fee is : "<<package[i]->getFee()<<endl;
             cout<<"the sum fee is : "<<package[i]->calculateCost()<<endl;
             cout<<"\n\n";
     }

    return 0;
}
