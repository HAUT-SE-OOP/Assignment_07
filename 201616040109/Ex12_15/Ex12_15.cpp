// Exercise 12.15 Solution:Ex12_15.cpp
//Processing Employee derived-class objects individually
//and polymorphically using dynamic binding
#include <iostream>
#include<iomanip>
#include<vector>
#include"Employee.h"
#include"SalariedEmployee.h"
#include"CommissionEmployee.h"
#include"BasePlusCommissionEmployee.h"
#include"PieceWorker.h"
#include"HourlyWorker.h"
using namespace std;

void virtualViaPointer(const Employee * const);//prototype
void virtualViaReference(const Employee &);//prototype

int main()
{
    //set floating-point output formating
    cout << fixed << setprecision( 2 );

    //create derived-class objects
    SalariedEmployee salariedEmployee("John","Smith","111-11-1111",800);
    CommissionEmployee commissionEmployee("Sue","Jones","333-33-3333",10000,.06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-4444",5000,.04,300);
    PieceWorker pieceWorker("Jack","Lewis","555-55-5555",30,500);
    HourlyWorker hourlyWorker("Tom","Jerry","666-66-6666",60,100);
    cout << "Employees processed individually using static binding:\n\n";

    //output each Employee's information  and earnings using static binding
    salariedEmployee.print();
    cout << "\nearned $" <<salariedEmployee.earnings()<<"\n\n";
    commissionEmployee.print();
    cout << "\nearned $" <<commissionEmployee.earnings()<<"\n\n";
    basePlusCommissionEmployee.print();
    cout << "\nearned $" <<commissionEmployee.earnings()<<"\n\n";
    pieceWorker.print();
    cout << "\nearned $" <<pieceWorker.earnings()<<"\n\n";
    hourlyWorker.print();
    cout << "\nearned $" <<hourlyWorker.earnings()<<"\n\n";

    vector< Employee *> employees( 5 );
    employees[0] = &salariedEmployee;
    employees[1] = &commissionEmployee;
    employees[2] = &basePlusCommissionEmployee;
    employees[3] = &pieceWorker;
    employees[4] = &hourlyWorker;

   cout << "Employees processed polymorphically using static binding:\n\n";

   //call virtualViaPointer to print each Employee's information
   //and earnings using dynamic binding
   cout << "Virtual function calls made off base-class pointers:\n\n";

   for(const Employee *employeePtr : employees)
        virtualViaPointer(employeePtr);

   //call virtualViaReference to print each Employee's information
   //and earnings using dynamic binding
   cout << "Virtual function calls made off base-class references:\n\n";

   for(const Employee *employeePtr : employees)
        virtualViaReference( *employeePtr );//note dereference

}//end main

//call Employee virtual function print and earnings off a
//base-class pointer using dynamic binding
void virtualViaPointer(const Employee * const baseClassPtr)
{
    baseClassPtr->print();
    cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
}

//call Employee virtual function print and earnings off a
//base-class reference using dynamic binding
void virtualViaReference(const Employee &baseClassRef)
{
    baseClassRef.print();
    cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
}
