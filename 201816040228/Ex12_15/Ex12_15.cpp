#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "HourlyEmployee.h"
#include "PieceWorker.h"

using namespace std;

int main()
{
   cout << fixed << setprecision( 2 );
   //creat derived -class odjects
   SalariedEmployee salariedEmployee("Jone", "Smith", "111-11-1111", 800);
   CommissionEmployee commissionEmployee("Sue", "Jones", "222-22-2222", 10000, .06);
   BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);
   HourlyEmployee hourlyEmployee("July", "White", "444-44-4444", 20, 50 );
   PieceWorker pieceWorker("Ming", "Li", "555-55-5555", .2, 500);

   //creat vector of five base-class pointers
   vector < Employee * > employees(5);

   // initialize vector with Employee
   employees[ 0 ] = &salariedEmployee;
   employees[ 1 ] = &commissionEmployee;
   employees[ 2 ] = &basePlusCommissionEmployee;
   employees[ 3 ] = &hourlyEmployee;
   employees[ 4 ] = &pieceWorker;

   for ( size_t i = 0; i < employees.size(); i++ )
   {
       employees[i]->print();
       cout << "\n\nearned:  " << employees[i]->earnings() << "\n\n";
   }

}

