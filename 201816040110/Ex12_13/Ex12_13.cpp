
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{
    double FEE=0.0,a;
    vector <Package *> packages(2);
   packages[ 0 ] = new OvernightPackage ("Bob","peter","New York","USA","USA","conlianfolia","oooo",1,2,0.5);
   packages[ 1 ] = new TwoDayPackage ("Johon","Sam","zhengzhou","USA","China","henan","450000",2,1,0.2);
    cout << fixed << setprecision( 2 );
    for ( size_t i = 0; i < packages.size(); i++ )
    {
        packages[i]->print();
        a=packages[i]->calculateCost();
        FEE+=a;
    }
    cout<<"the total freight is"<<FEE;

}
