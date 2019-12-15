
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

#include "Employee.h" // Employee class definition
#include "BasePlusCommissionEmployee.h" // BasePlusCommissionEmployee class definition
#include "CommissionEmployee.h" // CommissionEmployee class definition
#include "SalariedEmployee.h" // SalariedEmployee class definition
#include "PieceWorker.h" // PieceWorker class definition
#include "HourlyWorker.h" // HourlyWorker class definition

int main()
{
    vector<Employee *>employees(4);
   // create vector accounts
   /* Write declarations for a vector of four pointers
      to Account objects, called accounts */

   // initialize vector with Accounts
   employees[ 0 ] = new SalariedEmployee("Bob","Jones","333-33-3333",20);
   employees[ 1 ] = new CommissionEmployee("Bob","Jones","333-33-3333",2,10 );
   employees[ 2 ] = new BasePlusCommissionEmployee("Bob","Jones","333-33-3333",2,10,3 );
   employees[ 3 ] = new HourlyWorker( "Bob","Jones","333-33-3333",5,3);
   employees[ 4 ] = new PieceWorker( "Bob","Jones","333-33-3333",5,3);

   cout << fixed << setprecision( 2 );

   // loop through vector, prompting user for debit and credit amounts
   for ( size_t i = 0; i < employees.size(); i++ )
   {
       if(i==0)

        cout<<"SalariedEmployee:"<<employees[i]->print();
        if(i==1)

        cout<<"CommissionEmployee"<<employees[i]->print();
        if(i==2)

        cout<<"BasePlusCommissionEmployee"<<employees[i]->print();
        if(i==3)

        cout<<" HourlyWorker"<<employees[i]->print();
        if(i==4)

        cout<<"PieceWorker"<<employees[i]->print();



   } // end for
} // end main
