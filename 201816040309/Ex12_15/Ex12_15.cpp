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
 #include"PieceWorker.h"
 #include"HourlyEmployee.h"
 using namespace std;

 void virtualViaPointer( const Employee * const ); // prototype
 void virtualViaReference( const Employee & ); // prototype

 int main()
 {
 // set floating-point output formatting
 cout << fixed << setprecision( 2 );

 // create derived-class objects
 SalariedEmployee salariedEmployee(
    "John", "Smith", "111-11-1111", 800 );
 CommissionEmployee commissionEmployee(
    "Sue", "Jones", "333-33-3333", 10000, .06 );
 BasePlusCommissionEmployee basePlusCommissionEmployee(
    "Bob", "Lewis", "444-44-4444", 5000, .04, 300 );
 PieceWorker pieceworker("Sue1", "Jones", "333-33-3333", 10000, 6);
 HourlyEmployee hourlyemployee("John1", "Smith", "111-11-1111", 800,20);
 cout << "Employees processed individually using static binding:\n\n";

 // output each Employee��s information and earnings using static binding
 salariedEmployee.print();
 cout << "\nearned $" << salariedEmployee.earnings()<< "\n\n";
 commissionEmployee.print();

 cout << "\nearned $" <<salariedEmployee.earnings() << "\n\n";

 cout << "\nearned $" <<basePlusCommissionEmployee.earnings()
 << "\n\n";

    vector< Employee * > employees( 5 );
// initialize vector with pointers to Employees
    employees[ 0 ] = &salariedEmployee;
    employees[ 1 ] = &commissionEmployee;
    employees[ 2 ] = &basePlusCommissionEmployee;
    employees[ 3 ] = &pieceworker;
    employees[ 4 ] = &hourlyemployee;




 cout << "Employees processed polymorphically via dynamic binding:\n\n";

 // call virtualViaPointer to print each Employee's information
 // and earnings using dynamic binding
 cout << "Virtual function calls made off base-class pointers:\n\n";
 for ( const Employee *employeePtr : employees )
    virtualViaPointer( employeePtr );



 // call virtualViaReference to print each Employee's information
 // and earnings using dynamic binding
 cout << "Virtual function calls made off base-class references:\n\n";
for ( const Employee *employeePtr : employees )
        virtualViaReference( *employeePtr ); // note dereferencing
 }
// call Employee virtual functions print and earnings off a
// base-class pointer using dynamic binding
void virtualViaPointer( const Employee * const baseClassPtr )
    {
        baseClassPtr->print();
        cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
    } // end function virtualViaPointer
// call Employee virtual functions print and earnings off a
// base-class reference using dynamic binding
void  virtualViaReference( const Employee &baseClassRef )
    {
        baseClassRef.print();
        cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
    } // end function virtualV

