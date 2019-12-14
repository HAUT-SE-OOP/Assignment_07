//Assignment_07: Ex12_13.cpp
//test program
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <vector>
#include "Package.h" // Package class definition
#include "TwoDayPackage.h" // TwoDayPackage class definition
#include "OvernightPackage.h"// OvernightPackage class definition

using namespace std;

int main()
{
    cout << fixed << setprecision( 2 );

    vector < Package * > packages( 4 );

    packages[ 0 ] = new TwoPackage( "Smith", "Bob", "Princeton University",
                     "Cambridge", "Massachusetts", "00101", 15, .7, .3 );// create TwoPackage object
    packages[ 1 ] = new OvernightPackage( "Johnson", "Miller", "Harvard University", "Princeton",
                        "New Jersey", "00110", 25, .5, .1 );// create OvernightPackage object
    packages[ 2 ] = new TwoPackage( "Jones", "Jack", "Columbia University", "CT 06520",
                        "New Haven", "01000", 13, .4, .3 );// create TwoPackage object
    packages[ 3 ] = new OvernightPackage( "Nancy", "Kate", "Yale University", "116th St & Broadway",
                        "New York", "01001", 20, .8, .1 );// create TwoPackage object

    double cost = 0;

    // display massage
    for ( Package *packagePtr : packages )
    {
        cout << packagePtr->getSenderAddress() << endl;
        cout << packagePtr->getReceiveAddress() << endl;

        cout << "Send the package need $" << packagePtr->calculateCost() << "\n" << endl;

        cost += packagePtr->calculateCost();
    }

    cout << "Send all packages need $" << cost << endl;

}
