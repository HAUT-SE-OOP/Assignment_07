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

   employees[0] = new SalariedEmployee( "a", "A", "111111", 100 );
   employees[1] = new CommissionEmployee( "b", "B", "222222", 100, 0.01 );
   employees[2] = new PieceWorker( "c", "C", "333333", 1, 100 );
   employees[3] = new HourlyEmployee( "d", "D", "4444444", 1, 1 );
   employees[4] = new BasePlusCommissionEmployee( "e", "E", "555555", 100, 0.04, 100 );

   cout << fixed << setprecision( 2 );

   for ( Employee *employeePtr : employees )
   {
       employeePtr->print();
       cout << "\nearned $" <<employeePtr->earnings() << "\n\n";

       delete employeePtr;
   }
}
