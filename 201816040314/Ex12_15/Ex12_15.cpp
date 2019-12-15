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
void virtualViaReference(const Employee &baseClassRef)
{
    baseClassRef.print();
    cout<<"\nearned $"<<baseClassRef.earnings()<<"\n\n";
}
void virtualViaPointer(const Employee* const baseClassPtr)
{
    baseClassPtr->print();
    cout<<"\nearning $"<<baseClassPtr->earnings()<<"\n\n";
}

int main()
{
    cout<<fixed<<setprecision(2);
    PieceWorker pieceWorker("John","Smith","111-11-1111",10,200);//create the object pieceWorker
    HourlyWorker hourlyWorker01("Sue","Jones","333-33-3333",20,39);//create the object hourlyWorker01
    HourlyWorker hourlyWorker02("Bob","Lewis","444-44-4444",20,45);//create the object hourlyWorker02

    cout<<"Employee processed individually using static binding:\n\n";
     pieceWorker.print();
    cout<<"\nearned $"<<pieceWorker.earnings()<<"\n\n";
    hourlyWorker01.print();
    cout<<"\nearned $"<<hourlyWorker01.earnings()<<"\n\n";
     hourlyWorker02.print();
    cout<<"\nearned $"<< hourlyWorker02.earnings()<<"\n\n";

    vector<Employee*>employees(3);//initialize vector with pointers to Employee
    employees[0]=&pieceWorker;
    employees[1]=&hourlyWorker01;
    employees[2]=&hourlyWorker02;

    cout<<"Employees processed polymorphically via dynamic binding:\n\n";
    cout<<"virtual function calls made off base-class pointers:\n\n";
    for(const Employee*employeePtr:employees)
        virtualViaPointer(employeePtr);
    cout<<"Virtual function calls made off base-class references:\n\n";
    for(const Employee *employeePtr:employees)
        virtualViaReference(*employeePtr);

}
