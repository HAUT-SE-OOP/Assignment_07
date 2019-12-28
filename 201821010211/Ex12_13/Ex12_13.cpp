#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"


int main()
{
     vector <Package*>packages(2);
     packages[0]=new OvernightPackage("Z","L",300,0.5,0.1);
     packages[1]=new TwoDayPackage("Z","L",300,0.5,30);
     cout << fixed << setprecision( 2 );
     for ( size_t i = 0; i < packages.size(); i++ )
     {
         cout<<"adress "<<i+1<<": ";
         packages[i]->print();
     }
}
