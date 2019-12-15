#include <iostream>
#include <vector>
#include "Package.h" // Package class definition
#include "TwoDayPackage.h" // TwoDayPackage class definition
#include "OvernightPackage.h" // OvernightPackage class definition
using namespace std;

int main()
{
    vector < Package * > packages( 3 ) ;

    // initialize vector with packages
    packages[0] = new Package ("Jone","9600 Bellaire Blvd. Suite 101","Houston","Texas","90045",
                               "Mike","1 World Way","Los Angeles","California","77036",5,2);
    packages[1] = new TwoDayPackage ("Stephen","1 World Way","Los Angeles","California","90045",
                                     "Elena","910 42th Street","Brooklyn","New York","11219",6,3,5);
    packages[2] = new OvernightPackage ("James","910 42th Street","Brooklyn","New York","11219",
                                        "Jordan","9600 Bellaire Blvd. Suite 101","Houston","Texas","77036",7,4,2);

    int sumFee = 0;
    for ( Package *packagePtr : packages)
    {
        packagePtr->Print();
        cout<< "CalculateCost : " <<packagePtr->calculateCost()<<"\n\n";
        cout<<endl;
        sumFee += packagePtr->calculateCost();
    }
    cout<< "The total transportation cost is : " << sumFee << endl;
    return 0;
} // end main
