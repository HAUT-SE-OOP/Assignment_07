#include<iostream>
using namespace std;
#include"OvernightPackage.h"
#include"Package.h"
#include"TwoDayPackage.h"
#include <iomanip>
#include <vector>
int main()
{
    vector<Package*>people(2);
    people[ 0 ] = new TwoDayPackage("a","henanuniversity","c","d","e","f",5,4);
    people[ 1 ] = new OvernightPackage("aaa","henanuniversity","ccc","ddd","eee","fff",2,4,6);
    for(int i=0;i<=1;i++)
    {
        cout <<people[i]->getAddess()<< " "<<people[i]->calculateCost()<<endl;
    }
    return 0;
}

