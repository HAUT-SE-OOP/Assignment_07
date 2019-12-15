#include <iostream>
#include <iomanip>
using namespace std;

// BasePlusCommissionEmployee class definition
#include "BasePlusCommissionEmployee.h"
#include "CommissEmployee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "PieceWorker.h"
int main()
{
   // instantiate BasePlusCommissionEmployee object
   BasePlusCommissionEmployee
      employee1( "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );
   CommissionEmployee
      employee2( "Jack", "John", "444-44-4444", 6000, .05);
   SalariedEmployee
       employee3( "Mark","Wang", "555-55-5555", 300);
    HourlyEmployee
       employee4( "Lily","Li", "666-66-6666", 2.5 , 1);
    PieceWorker
       employee5( "Rose","Think", "777-77-7777", 2.5 , 4);

   // set floating-point output formatting
   cout << fixed << setprecision( 2 );

   // get commission employee data
   cout << "Employee information obtained by get functions: "
      << "\nFirst name is " << employee1.getFirstName()
      << "\nLast name is " << employee1.getLastName()
      << "\nSocial security number is "
      << employee1.getSocialSecurityNumber()
      << "\nGross sales is " << employee1.getGrossSales()
      << "\nCommission rate is " << employee1.getCommissionRate()
      << "\nBase salary is " << employee1.getBaseSalary()<<endl;
    cout << "Employee's earnings: $" << employee1.earnings() << endl;
    cout <<"\n\n";


     cout << "Employee information obtained by get functions: "
      << "\nFirst name is " << employee2.getFirstName()
      << "\nLast name is " << employee2.getLastName()
      << "\nSocial security number is "
      << employee2.getSocialSecurityNumber()
      << "\nGross sales is " << employee2.getGrossSales()
      << "\nCommission rate is " << employee2.getCommissionRate()<<endl;
     cout << "Employee's earnings: $" << employee2.earnings() << endl;
     cout <<"\n\n";

     cout << "Employee information obtained by get functions: "
      << "\nFirst name is " << employee3.getFirstName()
      << "\nLast name is " << employee3.getLastName()
      << "\nSocial security number is "
      << employee3.getSocialSecurityNumber()
      << "\nBase salary is " << employee3.getWeeklySalary()<<endl;
     cout << "Employee's earnings: $" << employee3.earnings() << endl;
     cout <<"\n\n";


     cout << "Employee information obtained by get functions: "
      << "\nFirst name is " << employee4.getFirstName()
      << "\nLast name is " << employee4.getLastName()
      << "\nSocial security number is "
      << employee4.getSocialSecurityNumber()
      << "\nwage is " << employee4.getWage()
      << "\nhours is "<< employee4.getHours()<<endl;
     cout << "Employee's earnings: $" << employee4.earnings() << endl;
     cout <<"\n\n";


     cout << "Employee information obtained by get functions: "
      << "\nFirst name is " << employee5.getFirstName()
      << "\nLast name is " << employee5.getLastName()
      << "\nSocial security number is "
      << employee5.getSocialSecurityNumber()
      << "\nwage is " << employee5.getWage()
      << "\nhours is "<< employee5.getPieces()<<endl;
     cout << "Employee's earnings: $" << employee5.earnings() << endl;
     cout <<"\n\n";

} // end main
