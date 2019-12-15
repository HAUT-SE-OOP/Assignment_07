#include <iostream>
#include <stdexcept>
#include "Package.h"

using namespace std;
void virtualViaPionter( const package * const ); //prototype
void virtualViaReference( const package & ); // prototype


int main()
{
    TwoDayPackage
         P1( "Bob","June","Amecian","New York","New York State",
            "10041NY212","10","10","10")
    OvernightPackage
         P2( "Smith","Jones","Amecian","Washington","Washington D.C",
            "20237","10","10","10")
            
    cout << fixed << setprecision(2);

   vector < Package * > Package(5);

    //initialize vector with pointers to Package
    Package[0] = &P1;
    Package[1] = &P2;


    cout << "Package processed polymorphically via dynamic binding:\n\n";

    //call virtualViaPointer to print each Package's information
    //and earnings using dynamic binding
    cout << "virtual function calls made off base-class pointers:\n\n";

    for( const Package *PackagePtr: Package )
        virtualViaReference( *PackagePtr ); //note dereferencing

}//end main

//base-class pointer using dynamic binding
void virtualViaPointer( const Package *const baseClassPtr)
{
    baseClassPtr->print();
    cout << "\ncalculate " << baseClassPtr->calculateCost() << "\n\n";
}

//base-class reference using dynamic binding
void virtualViaReference( const Package &baseClassRef)
{
    baseClassRef.print();
    cout << "\ncalculate " << baseClassRef.calculateCost() << "\n\n";
}
