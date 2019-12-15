#include<vector>
#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

using namespace std;

int main()
{
    OvernightPackage O("wang", "he", "zhengzhou", "2018", "china", "zhen", "bei", "handan", "2018", "china", 5.0, 2.0, 1.0);
    TwoDayPackage T("wang", "he", "zhengzhou", "2018", "china", "zhen", "bei", "handan", "2018", "china", 5.0, 2.0, 1.0);
    vector< Package *> packages(2);
    packages[0] = &O;
    packages[1] = &T;
    double sum = 0.0;

    for( Package *packagePtr : packages)
    {
        OvernightPackage *OPtr = dynamic_cast < OvernightPackage * > (packagePtr);
        TwoDayPackage *TPtr = dynamic_cast < TwoDayPackage * > (packagePtr);

        if(OPtr)
        {
            cout << "The address of OvernightPackage's sender is " << OPtr->getSenderAddress() << endl;
            cout << "The address of OvernightPackage's recipient is " << OPtr->getRecipientAddress() << endl ;
            cout << "The OvernightPackage's price is " << OPtr->calculateCost() << endl << endl;    //输出费用
            sum += OPtr->calculateCost();
        }
        else if(TPtr)
        {
            cout << "The address of TwoDayPackage's sender is " << TPtr->getSenderAddress() << endl;
            cout << "The address of TwoDayPackage's recipient is " << TPtr->getRecipientAddress() << endl;
            cout << "The TwoDayPackage's price is " << TPtr->calculateCost() << endl << endl;   //输出费用
            sum += TPtr->calculateCost();
        }
    }

    cout << "The total cost is " << sum << endl;

    return 0;
}
