#include <iostream>
#include <iomanip>
#include <stdexcept>
#include "PieceWorker.h"
#include "Employee.h"
#include "HourlyWorker.h"
#include <vector>
#include <typeinfo>
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "SalariedEmployee.h"
using namespace std;

void virtualViaPointer( const Employee *const );
void virtualViaReference( const Employee & );
int main()
{
    cout << fixed << setprecision( 2 );
    SalariedEmployee salariedEmployee(
    "John" ,  "Smith" , "111-11-1111" , 800);
    CommissionEmployee commissionEmployee(
    "Sue" , "Jones" , "333-33-3333" , 10000, .06);
    BasePlusCommissionEmployee basePlusCommissionEmployee(
    "Bob" , "Lewis" , "444-44-4444" , 5000 , .04 , 300 );
    PieceWorker pieceWorker(
    "Peter" , "Johnison" , "222-22-2222" , 20 , 30 );
    HourlyWorker hourlyWorker(
    "Leo" , "Krious" , "555-55-5555" , 15 , 60 );
    cout << "Employees pocessed individually using static binding:\n\n";
    salariedEmployee.print();
    cout<<"\nearned $"<<salariedEmployee.earnings()<<"\n\n";
    commissionEmployee.print();
    cout<<"\nearned $"<<commissionEmployee.earnings()<<"\n\n";
    basePlusCommissionEmployee.print();
    cout<<"\nearned $"<<basePlusCommissionEmployee.earnings()<<"\n\n";
    pieceWorker.print();
    cout<<"\nearned $"<<pieceWorker.earnings()<<"\n\n";
    hourlyWorker.print();
    cout<<"\nearned $"<<hourlyWorker.earnings()<<"\n\n";
    vector<Employee *> employees( 5 );
    employees[0]=&salariedEmployee;
    employees[1]=&commissionEmployee;
    employees[2]=&basePlusCommissionEmployee;
    employees[3]=&pieceWorker;
    employees[4]=&hourlyWorker;
    cout<<"Employ processed polymorphically via dynamic binding:\n\n";
    cout<<"Virtual function calls made off base-class pointers:\n\n";
    for( const Employee *employeePtr : employees )
    {
        virtualViaReference( *employeePtr );
    }
}

void virtualViaPointer ( const Employee * const baseClassPtr)
{
    baseClassPtr->print();
    cout<<"\nearned $" << baseClassPtr->earnings()<<"\n\n";
}

void virtualViaReference ( const Employee &baseClassRef )
{
    baseClassRef.print();
    cout<< "\nearned $" << baseClassRef.earnings()<<"\n\n";
}















