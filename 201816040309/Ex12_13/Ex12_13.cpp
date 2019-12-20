#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include <vector>

using namespace std;
int main()
{

    vector<Package* > a;
    OvernightPackage B("he","pe","haut","hadad","zhengzhou","gaoxin","4235",20,5,10);
    a.push_back(&B);
    TwoDayPackage C("he","pe","haut","hadad","zhengzhou","gaoxin","4235",20,5,20);
    a.push_back(&C);
    int price = 0;
    int count1 = a.size();
    for(int i=0;i<count1;i++)
    {
        cout<<"the sender address is  "<<a[i]->GetFromAddress()<<endl;
        cout<<"the receiver address is "<<a[i]->GetSendAddress()<<endl;
        cout<<"the Calculate is "<<a[i]->CalculateCost(10,20)<<endl;
        price += a[i]->CalculateCost(10,20);
    }
    cout<<"all price is "<<price<<endl;

}
