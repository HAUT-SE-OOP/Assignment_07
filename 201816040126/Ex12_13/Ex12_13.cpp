#include <iostream>
#include <iomanip>
#include <vector>


#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

using namespace std;


int main()
{
    cout << fixed << setprecision( 2 );

    vector < Package * >packages( 2 );//set two packages pointers

    packages[ 0 ] = new OvernightPackage( "Zhang San", "Li Si" , "Changan Load" ,
                    "Dazhou", "Sichuan Province", "635200", 20, 8, 2);
                    //the first one's information
    packages[ 1 ] = new TwoDayPackage( "Li Si" ,"Zhang San", "Nanjing Load" ,
                    "Jiefang Bei", "Chongqing Province", "400000-409912", 20, 5, 30);
                    //the second one's information

    int i = 0;
        cout << "The information about the overnight package as follows: " << endl;
        cout << "Send name :" << packages[ i ]->getSendName()
        << "     Receive name :" << packages[ i ]->getReceiveName()<< endl;
        cout << "The Delivery Address :" << packages[ i ]->getProvince() << packages[ i ]->getCity() << packages[ i ]->getAddress() << endl;


    cout << "\nThe package is over 2 days,so we should add flat charge." << endl;
    cout << "The total price about the package that over 2 days is :"
    << packages[ i ]->calculateCost();


    cout << "\n\n\nThe information about the overnight package as follows: " << endl;
    cout << "Send name :" << packages[ i+1 ]->getSendName()
    << "     Receive name :" << packages[ i+1 ]->getReceiveName()<< endl;
    cout << "The Delivery Address :" << packages[ i+1 ]->getProvince() << packages[ i+1 ]->getCity() << packages[ i+1 ]->getAddress() << endl;



        cout << "\nThe package is over night,so we should add additional cost." << endl;
        cout << "The total price about the package that over night is :"
    << packages[ i+1 ]->calculateCost();

}
