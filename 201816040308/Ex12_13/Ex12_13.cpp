#include <bits/stdc++.h>

#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;
int main()
{
    vector<Package*> package(2);

    package[0]=new TwoDayPackage("Bob","Luise","Henan University of Technology","ZhengZhou","HeNan","120000",4.0,5.0,10.0);
    package[1]=new OvernightPackage ("Bob","Luise","Henan University of Technology","ZhengZhou","HeNan","120000",4.0,5.0,10.0);
    cout << fixed << setprecision( 2 );
    for(Package *packageptr : package)
    {
        packageptr->get();
        TwoDayPackage *twoptr = dynamic_cast <TwoDayPackage *>(packageptr);
        if(twoptr!=nullptr){
            cout<<"This is a TwoDayPackage"<<endl;
            cout<<"The cast is: "<<twoptr->calculateCost()<<endl<<endl;
        }
        else{
            cout<<"This is a OvernightPackage"<<endl;
            cout<<"The cast is: "<<packageptr->calculateCost()<<endl<<endl;
        }
    }
    return 0;
}
