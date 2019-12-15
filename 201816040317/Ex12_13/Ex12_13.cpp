#include <iostream>
#include <stdexcept>
#include <vector>
#include <iomanip>
#include "Package.h" // Package class definition
#include "TwoDayPackage.h" // TwoDayPackage class definition
#include "OvernightPackage.h"// OvernightPackage class definition

using namespace std;

int main()
{
    cout << fixed << setprecision( 2 );
    vector < Package * > packages( 2 );
    packages[ 0 ] = new TwoPackage( "a", "b", "c","d", "e", "00101", 35, .5 );
    package[1]=new OvernightPackage( "f", "g", "h", "i","j", "00101", 35, .5, .1 );
    double cost=0.0;
    for ( const Package *packagePtr : packages )
    {
         cost += packagePtr->calculateCost();
        cout <<"senderAdress is:"<< packagePtr->getSenderAddress() << endl;
        cout << "receiveAddress is:"<<packagePtr->getReceiveAddress() << endl;
        cout << "Send the package need $" << packagePtr->calculateCost() << endl;
    }

    cout << "Send all packages need $" << cost << endl;
}
