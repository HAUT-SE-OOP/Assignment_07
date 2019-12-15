#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <vector>
#include <iomanip>
using namespace std;

int main()
{

    vector<Package*>PPtr(3);
   PPtr[0]=new Package("Li","chongqing","wang","Shanghai Univer","shanghai","china","200444",10,12);
    PPtr[1]=new TwoDayPackage("Li","chongqing","wang","Shanghai Univer","shanghai","china","200444",10,12,15);
PPtr[2]=new OvernightPackage("Li","chongqing","wang","Shanghai Univer","shanghai","china","200444",10,12,2);
  for ( size_t i = 0; i < PPtr.size(); i++ )
  {
      PPtr[i]->display();
      cout<<endl;
  }
    return 0;
}
