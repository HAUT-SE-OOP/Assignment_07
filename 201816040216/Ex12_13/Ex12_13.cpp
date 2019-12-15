#include <iostream>

#include <iomanip>

using namespace std;

#include <vector>

#include "Package.h" // Account class definition

#include "OvernightPackage.h" // SavingsAccount class definition

#include "TwoDayPackage.h" // CheckingAccount class definition



int main()

{
    vector<Package *>packages(2);

    /*packages[0]=new ("Sue June","New York","New York","14 street","10041NY212",

                     "Kevin Wayne Durant","Washington","D C","12 street","20237",15,1);*/

    packages[0]=new OvernightPackage("Bob lewis","Washington","D C","13 street","20237",

                     "Sue June","New York","New York","14 street","10041NY212",15,1,5);

    packages[1]=new TwoDayPackage("Kevin Wayne Durant","Washington","D C","12 street","20237",

                  "Sue June","New York","New York","14 street","10041NY212",15,1,2);


    cout << fixed << setprecision( 2 );
    for(size_t i=0;i<=packages.size();i++)
    {
        cout<<"SenderCity is:"<<packages[i]->getSenderCity();
        cout<<"\nSenderState is:"<<packages[i]->getSenderState();
        cout<<"\nSenderAddress is:"<<packages[i]->getSenderAddress();

        cout<<"ReciverCity is:"<<packages[i]->getReciverCity();
        cout<<"\nReciverState is:"<<packages[i]->getReciverState();
        cout<<"\nReciverAddress is:"<<packages[i]->getReciverAddress();

        cout<<"\nThe totalcost is:"<<packages[i]->calculateCost();
    }

}
