#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <vector>

using namespace std;

int main()
{
    vector < Package * > pack( 3 ) ;

    Package ppack( "Bob James" , "Henan University of Technology" , "Zhengzhou" , "Henan Province" ,"450000" ,
                  "Jones Snow" , "The Winter Fall" , "NorthLand" , "Westeros continent" , "563000" ,
                  25.8 , 13.3 );
    TwoDayPackage ppack1("Mr.Piao" , "Beijing University" , "Beijing" , "China" ,"100000" ,
                  "Marnis Coylis" , "Gryffindor" , "Hogwarts" , "England" , "##3000" ,
                  25.8 , 56 , 32 );
   OvernightPackage ppack2("Harry Potter" , "Greenwood 100-1002" , "JiLin" , "northeast of China" ,"130000" ,
                  "Hermione" , "Lotus Street No.100" , "Zhengzhou" , "Henan Province" , "563000" ,
                  34 , 13.3 , 32 ) ;

    pack[ 0 ] = &ppack;
    pack[ 1 ] = &ppack1;
    pack[ 2 ] = &ppack2;
    double sum = 0;//Define sum to find the total price of the package
    for ( Package*packagePtr : pack )
    {
        cout << "Delivery address : "<<packagePtr->getsenderAddress() <<endl<<"recipient address : "<<packagePtr->getrecipientAddress()<<endl<<packagePtr->calculateCost()<<endl;
        cout << "\n" ;
        sum += packagePtr->calculateCost();
    }
    cout << "Package Total Shipping Cost : " << sum <<endl;
    return 0;
}
