#include <iostream>
#include "OvernightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include <vector>

using namespace std;

int main()
{
    vector< Package *> package(2);
    package[0]=new TwoDayPackage("Sue June","14 street","New York","New York","10041NY212", "Kevin Durant","12 street","Washington","D C","20237",100,0.98,1 );
    package[1]=new OvernightPackage("Bob lewis","13 street","Washington","D C","20237","YaSue", "JF", "AONY", "WLL", "461000",100,0.6,0.4);
    double sum=0;
    for(int i=0;i<2;i++)
    {
        package[i]->print();
        cout<< "calculateCost:"<< package[i]->calculateCost()<<endl;
        sum+=package[i]->calculateCost();

    }
    cout<< "\nsum:"<<sum<<endl;
    return 0;
}
