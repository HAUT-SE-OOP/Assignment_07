//12_13.cpp
#include <iostream>
#include <stdexcept>
#include <vector>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
using namespace std;

int main()
{
    //create vector for two package
    vector <Package *>packages(2);
    //create derived-class objects
    OvernightPackage P1("Cici","third street","Miami","Florida","420048","David","fourth street","Sacramento","California","95899",2.0,6.0,1.0);
    TwoDayPackage P2("Elly","fifth street","Austin","Texas","422648","Frank","sixth street","Spring field","Illinois","32673",3.0,2.5,0.6);
    //initialize vector with pointer to Package
    packages[0]=&P1;
    packages[1]=&P2;

    double TotalCost=0.0;//The TotalCost of vector

    //polymorphically process each element in vector package
    for(Package *packagePtr:packages)
    {
        packagePtr->print();//output package information
        TotalCost+=packagePtr->calculateCost();
        cout<<endl;
    }
    cout<<endl<<endl<<endl<<"The TotalCost of vector is: $"<<TotalCost;

}
