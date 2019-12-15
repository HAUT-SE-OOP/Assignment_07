#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "HourlyWorker.h"
#include "PieceWorker.h"
using namespace std;

void virtualViaPointer(const Employee *const); // prototype
void virtualViaReference(const Employee &);    // prototype

int main()
{
   // set floating-point output formatting
   cout << fixed << setprecision(2);
   HourlyWorker hourlyWorker(
       "Baby", "aby", "555-55-5555", 10, 50);
   PieceWorker pieceWorker("LIly", "Davie", "666-66-6666", 30, 10);
   cout << "Employees processed individually using static binding:\n\n";


   vector<Employee *> employees(2);

   // initialize vector with Employees
   employees[0] = &hourlyWorker;
   employees[1] = &pieceWorker;

   for (const Employee *employeePtr : employees)
      virtualViaReference(*employeePtr); // note dereferencing
} // end main

// call Employee virtual functions print and earnings off a
// base-class reference using dynamic binding
void virtualViaReference(const Employee &baseClassRef)
{
   baseClassRef.print();
   cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
} // end function virtualViaReference
