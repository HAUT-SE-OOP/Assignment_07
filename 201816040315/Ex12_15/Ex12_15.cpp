//Ex12_15.cpp
//Procession Employee derived class objects individually
//and polymorphically using dynamic binding
#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

void virtualViaPointer( const Employee * const);//prototype
void virtualViaReference( const Employee &);//prototype

int main()
{
    cout<<fixed<<setprecision(2);//set floating pointer output formatting

    SalariedEmployee salariedEmployee("John","Smith","111-1111",800);
    CommissionEmployee commissionEmployee("Sue","Jones","333-3333",10000, .06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-4444",5000,.04,300);

    PieceWorker pieceWorker("Shaoxu","Tang","666-6666",50.00,100);
    HourlyWorker hourlyWorker("YiFeng","Li","888-8888",50,60);

    cout<<"Employees processed individually using static binding:\n\n";
    salariedEmployee.print();
    cout<<"\nearnings: $"<<salariedEmployee.earnings()<<endl<<endl;
    commissionEmployee.print();
    cout<<"\nearnings: $"<<commissionEmployee.earnings()<<endl<<endl;
    basePlusCommissionEmployee.print();
    cout<<"\nearnings: $"<<basePlusCommissionEmployee.earnings()<<endl<<endl;

    pieceWorker.print();
    cout<<"\nearnings : $"<<pieceWorker.earnings()<<endl<<endl;
    hourlyWorker.print();
    cout<<"\nearnings: $"<<hourlyWorker.earnings()<<endl<<endl;


    vector<Employee *>employee(5);

    employee[0]=&salariedEmployee;
    employee[1]=&commissionEmployee;
    employee[2]=&basePlusCommissionEmployee;
    employee[3]=&pieceWorker;
    employee[4]=&hourlyWorker;

    cout<<"Employee processed polymorphically via dynamic binding:\n\n";

    cout<<"Virtual function calls made off base class pointers:\n\n";

    for( const Employee *employeePtr : employee)
        virtualViaPointer(employeePtr);

    cout<<"Virtual function calls made off base class references:\n\n";
    for( const Employee *employeePtr : employee)
        virtualViaReference(*employeePtr);

}//end main

void virtualViaPointer( const Employee *const baseClassPtr)
{
    baseClassPtr->print();
    cout<<"\nearnings $"<<baseClassPtr->earnings()<<"\n\n";

}//end

void virtualViaReference(const Employee &baseClassRef)
{
    baseClassRef.print();
    cout<<"\nearnings $"<<baseClassRef.earnings()<<"\n\n";
}//end
