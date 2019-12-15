#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "PieceWorker.h"
#include "HourlyEmployee.h"
using namespace std;

void virtualViaPointer( const Employee * const ); // prototype

int main()
{
   // set floating-point output formatting
   //cout << fixed << setprecision(5);

   // create derived-class objects
   SalariedEmployee salariedEmployee( "John", "Smith", "111-11-1111", 800 );
   CommissionEmployee commissionEmployee( "Sue", "Jones", "333-33-3333", 10000, .06 );
   BasePlusCommissionEmployee basePlusCommissionEmployee( "Bob", "Lewis", "444-44-4444", 5000, .04, 300 );
   PieceWorker pieceWorker("zy", "l", "222-22-2222", 20, 100, 0.0);
   HourlyEmployee hourlyWorker("sj", "w", "555-55-5555", 30, 40, 0.0);




   // create vector of three base-class pointers
   vector < Employee * > employees( 5 );

   // initialize vector with Employees
   employees[ 0 ] = &salariedEmployee;
   employees[ 1 ] = &commissionEmployee;
   employees[ 2 ] = &basePlusCommissionEmployee;
   employees[ 3 ] = &pieceWorker;
   employees[ 4 ] = &hourlyWorker;



   cout << "Virtual function calls made off base-class pointers:\n\n";

   for ( const Employee *employeePtr : employees )
      virtualViaPointer( employeePtr );


} // end main

// call Employee virtual functions print and earnings off a
// base-class pointer using dynamic binding
void virtualViaPointer( const Employee * const baseClassPtr )
{
   baseClassPtr->print();
   cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
} // end function virtualViaPointer
