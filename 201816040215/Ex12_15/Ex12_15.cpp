//Ex12_15.cpp
#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"
using namespace std;

void virtualViaPionter( const Employee * const ); //prototype
void virtualViaReference( const Employee & ); // prototype

int main()
{
    //set floating-point output formatting
    cout << fixed << setprecision(2);

    //create derived-class objects
    SalariedEmployee salariedEmployee("John", "Smith", "111-11-1111", 800);
    CommissionEmployee commissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "444-44-4444",
                                                          5000, .04, 300);
    PieceWorker pieceworker("July", "June", "555-55-5555", 1.1, 20);
    HourlyWorker hourlyWorker("Jame", "Alex", "666-66-6666", 2.2, 30);

    //create vector of 3 base-class pointers
    vector < Employee * > employees(5);

    //initialize vector with pointers to Employees
    employees[0] = &salariedEmployee;
    employees[1] = &commissionEmployee;
    employees[2] = &basePlusCommissionEmployee;
    employees[3] = &pieceworker;
    employees[4] = &hourlyWorker;

    cout << "Employees processed polymorphically via dynamic binding:\n\n";

    //call virtualViaPointer to print each Employee's information
    //and earnings using dynamic binding
    cout << "virtual function calls made off base-class pointers:\n\n";

    for( const Employee *employeePtr: employees )
        virtualViaReference( *employeePtr ); //note dereferencing

}//end main

//base-class pointer using dynamic binding
void virtualViaPointer( const Employee *const baseClassPtr)
{
    baseClassPtr->print();
    cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
}

//base-class reference using dynamic binding
void virtualViaReference( const Employee &baseClassRef)
{
    baseClassRef.print();
    cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
}

