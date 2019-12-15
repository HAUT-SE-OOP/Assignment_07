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
    Package a("Bob","Zzc","1","1","1","111",10,2);//20
    TwoDayPackage b("Coc","zzc","1","1","1","111",10,2,10);//30
    OvernightPackage c("Dod","zzc","1","1","1","111",10,2,0.5);//25
    vector<Package *>package(3);
    package[0]=&a;
    package[1]=&b;
    package[2]=&c;

    cout<<fixed<<setprecision(2);
    for( Package *packagePtr : package)
        virtualViaPoint( packagePtr);
}
void virtualViaPoint( Package *  a)
{
    a->print();

}
