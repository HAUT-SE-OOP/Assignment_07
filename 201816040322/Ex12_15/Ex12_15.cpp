// Assignment_07: Ex12_15.cpp
// Testing
#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "PieceWorker.h"
#include "HourlyEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main()
{
   vector < Employee * > employees( 5 );

   // instantiate BasePlusCommissionEmployee object
   employees[0] = new SalariedEmployee
   ( "John", "Smith", "111-11-1111", 800 );
   employees[1] = new CommissionEmployee
   ( "Sue", "Jone", "222-22-2222", 10000, .06 );
   employees[2] = new PieceWorker
   ( "Brown", "Miller", "333-33-3333", 5, 500 );
   employees[3] = new HourlyEmployee
   ( "Rodriguez", "Taylor", "444-44-4444", 60, 46 );
   employees[4] = new BasePlusCommissionEmployee
   ( "Bob", "Lewis", "555-55-5555", 5000, .04, 300 );

   // set floating-point output formatting
   cout << fixed << setprecision( 2 );

   // display
   for ( const Employee *employeePtr : employees )
   {
       employeePtr->print();
       cout << "\nearned $" << employeePtr->earnings() << "\n\n";

       delete employeePtr;
   }
} // end main
