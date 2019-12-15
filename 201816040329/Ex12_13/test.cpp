#include <iostream>
#include "package.h"
#include "overnightpackage.h"
#include "twodaypackage.h"

using namespace std;

int main()
{
    package pa1("Gena","kitty","92 West","Harbinee","dalian",1593,2.7,200.3);
    pa1.calculateCost();
    pa1.print();
    cout<<"\n";
    twodaypackage tw1("Gena","kitty","92 West","Harbinee","dalian",1593,2.7,200.3,30.0);
    tw1.print();
    cout<<"\n";
    overnightpackage on1("Gena","kitty","92 West","Harbinee","dalian",1593,2.7,200.3,67.0);
    on1.calculateCost();
    on1.print();
    cout<<"\n";
    return 0;
}
