#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

 void virtualViaPoint( Package * );
int main()
{
    vector<Package *>package(3);
    package[0]= new  Package ("Bob","Joc","11","1sa","1hg","6461",10,2);
    package[1]= new TwoDayPackage ("KHJi","KLHl","uyt","hrt","khk","khj",10,2,10);
    package[3]= new OvernightPackage ("Dhgfd","KBdg","huo","hj","gff","gfh",10,2,0.5);
     cout<<fixed<<setprecision(2);
    for( size_t i=0; i<package.size(); i++)
    {
        package[i]->print();

    }
}
