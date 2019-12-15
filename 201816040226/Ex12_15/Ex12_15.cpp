#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"
using namespace std;


void virtualViaPointer( Employee * const);
void virtualViaReference( Employee &);

int main()
{
    cout<<fixed<<setprecision(2);

   SalariedEmployee salariedEmployee( "John","Smith","111-11-11111",800); // create Account object
   CommissionEmployee commissionEmployee("Sue","Jones","333-33-3333",10000,0.06);// create SavingsAccount object
   BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-444",5000,0.04,300); // create CheckingAccount object
   PieceWorker pieceWorker("Tom","Smith","555-55-555",50,6);
   HourlyWorker hourlyWorker("Jerry","Smith","777-77-777",50,7);

    /*cout<<"Employees processed individually using static binding:\n\n";
    salariedEmployee.print();
    cout<<"\nearned $"<<salariedEmployee.earnings()<<"\n\n";
    commissionEmployee.print();
    cout<<"\nearned $"<<commissionEmployee.earnings()<<"\n\n";
    basePlusCommissionEmployee.print();
    cout<<"\nearned $"<<basePlusCommissionEmployee.earnings()<<"\n\n";
    pieceWorker.print();
    cout<<"\nearned $"<<pieceWorker.earnings()<<"\n\n";
    hourlyWorker.print();
    cout<<"\nearned $"<<hourlyWorker.earnings()<<"\n\n";*/

    vector<Employee * >employees(5);
    employees[0]=&salariedEmployee;
    employees[1]=&commissionEmployee;
    employees[2]=&basePlusCommissionEmployee;
    employees[3]=&pieceWorker;
    employees[4]=&hourlyWorker;

    //cout<<"Employees processed polymorphically via dynamic binding: \n\n";
    cout<<"virtual function calls made off base-class pointers: \n\n";
    for( Employee *employeePtr :employees)
        virtualViaPointer(employeePtr);

    /*cout<<"virtual function calls made off base-class references: \n\n";
    for( Employee * employeePtr :employees)
        virtualViaReference( *employeePtr );*/
}
void virtualViaPointer(Employee *  baseClassPtr)
{
    baseClassPtr->print();
    cout<<"\nearned $"<<baseClassPtr->earnings()<<"\n\n";
}
/*void virtualViaReference( Employee &baseClassRef)
{
    baseClassRef.print();
    cout<<"\nearned $"<<baseClassRef.earnings()<<"\n\n";
}*/
