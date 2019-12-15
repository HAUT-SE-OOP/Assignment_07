//Ex12_15.cpp

#include <iostream>
#include <iomanip>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "PieceWorker.h"
#include "HourlyEmployee.h"
#include <vector>
using namespace std;
void virtualViaPointer(const Employee*const) ;
void virtualViaReference( const Employee& );
int main()
{

    cout <<fixed << setprecision( 2);
    SalariedEmployee salariedEmployee("John", "Smith","111-11-1111",800);
    CommissionEmployee commissionEmployee("Sue", "Jones","333-33-3333",10000,0.06 );
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-4444",5000,0.04,300 );
    PieceWorker pieceWorker("Ann","Black","555-55-5555",10,10);
    HourlyEmployee hourlyEmployee("Ken","Black","777-77-7777",15,20);
    cout <<"Employees processed individually using static binding:\n\n";
    salariedEmployee.print();
    cout <<"\nearned $"<<  salariedEmployee.earnings()<<"\n\n";
    commissionEmployee.print();
    cout <<"\nearned $"<< commissionEmployee.earnings()<<"\n\n";
    basePlusCommissionEmployee.print();
    cout <<"\nearned $"<< basePlusCommissionEmployee.earnings()<<"\n\n";
    pieceWorker.print();
    cout<<"\nearned $"<<pieceWorker.earnings()<<"\n\n";
    hourlyEmployee.print();
    cout<<"\nearned $"<<hourlyEmployee.earnings()<<"\n\n";
     vector< Employee * > employees(5);
     employees[0] = &salariedEmployee;
     employees[1] = &basePlusCommissionEmployee;
     employees[2] = &commissionEmployee;
     employees[3] = &pieceWorker;
     employees[4] = &hourlyEmployee;
      cout <<"Employees processed polymorphically via dynamic binding:\n\n";
      cout << "Virtual function calls made off base-class pointers:\n\n";
      for ( const Employee *employeePtr:employees )
      virtualViaPointer( employeePtr );
      cout << "Virtual function base-class references:\n\n";
      for (const Employee *employeePtr:employees  )
      virtualViaReference(*employeePtr);
}
void virtualViaPointer( const Employee * const baseClassPtr)
{
    baseClassPtr->print();
    cout << "\nearned $" << baseClassPtr->earnings()<<"\n\n";
}
void virtualViaReference( const Employee &baseClassRef )
{
    baseClassRef.print();
    cout <<"\nearned $" <<baseClassRef.earnings()<<"\n\n";
}// end function virtualViaReference
