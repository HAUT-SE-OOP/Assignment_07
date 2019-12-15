// Fig. 12.17: fig12_17.cpp
// Processing Employee derived-class objects individually
// and polymorphically using dynamic binding.
#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

/*void virtualViaPointer( const Employee * const ); // prototype
void virtualViaReference( const Employee & ); // prototype*/

int main()
{
   // set floating-point output formatting
   cout << fixed << setprecision( 2 );

   // create derived-class objects
   /*SalariedEmployee salariedEmployee(
      "John", "Smith", "111-11-1111", 800 );
   CommissionEmployee commissionEmployee(
      "Sue", "Jones", "333-33-3333", 10000, .06 );
   BasePlusCommissionEmployee basePlusCommissionEmployee(
      "Bob", "Lewis", "444-44-4444", 5000, .04, 300 );*/

   cout << "Employees processed individually using static binding:\n\n";

   // output each Employee’s information and earnings using static binding
/*   salariedEmployee.print();
   cout << "\nearned $" << salariedEmployee.earnings() << "\n\n";
   commissionEmployee.print();
   cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";
   basePlusCommissionEmployee.print();
   cout << "\nearned $" << basePlusCommissionEmployee.earnings()
      << "\n\n";

   // create vector of three base-class pointers*/
   vector < Employee * > employees( 3 );

   // initialize vector with Employees
   employees[ 0 ] = new SalariedEmployee("John", "Smith", "111-11-1111", 800);
   employees[ 1 ] = new CommissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06);
   employees[ 2 ] = new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 5000, .04, 300);

   cout << "Employees processed polymorphically via dynamic binding:\n\n";

   // call virtualViaPointer to print each Employee's information
   // and earnings using dynamic binding
   cout << "Virtual function calls made off base-class pointers:\n\n";

   for (  Employee *employeePtr : employees )
      {
          cout << "\nearned $" << employeePtr->earnings() << "\n\n";
          //cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
      }

   // call virtualViaReference to print each Employee's information
   // and earnings using dynamic binding
   cout << "Virtual function calls made off base-class references:\n\n";
}
