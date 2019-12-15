#include <iostream>
#include<vector>
using namespace std;
#include"OvernightPackage.h"
#include"TwoDayPackage.h"

int main()
{
    vector<Package>PPP;
    TwoDayPackage tow("Liu","Zhang","California","Los Angeles",911911,10,12,5,"Illinois","Chicago",888888);
    OvernightPackage ove("Song","Shi","Illinois","Chicago",888888,7,14,7,"California","Los Angeles",911911);
    PPP.push_back(tow);
    PPP.push_back(ove);
    cout << "TowDayPackage address:" <<endl;
    PPP[0].pointLocal();
    cout << "calculateCost: " << PPP[0].calculateCost() <<endl;
    cout << "\nOvernightPackage: " <<endl;
    PPP[1].pointLocal();
    cout <<"calculateCost: " << PPP[1].calculateCost() <<endl;
    return 0;
}
