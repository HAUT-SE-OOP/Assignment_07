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
void virtualViaPointer(const Employee *const);
void virtualViaReference(const Employee &);
int main()
{
    cout<<fixed<<setprecision(2);
    SalariedEmployee salariedEmployee{"John","Smith","111-11-1111",800};
    CommissionEmployee commissionEmployee("Sue","Jones","333-33-3333",10000,.06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-4444",5000,.04,300);
    HourlyWorker hourlyWorker("ze","tian","555-55-5555",12,45);
    PieceWorker pieceWorker("mu","ye","888-88-8888",16,30);
    cout<<"Employees processed individually using static binding:\n\n";
    salariedEmployee.print();
    cout<<"\nearned $"<<salariedEmployee.earnings()<<"\n\n";
    commissionEmployee.print();
    cout<<"\nearned $"<<commissionEmployee.earnings()<<"\n\n";
    basePlusCommissionEmployee.print();
    cout<<"\nearned $"<<basePlusCommissionEmployee.earnings()
    <<"\n\n";
    cout<<"\nearned $"<<hourlyWorker.earnings()<<"\n\n";
    hourlyWorker.print();
    cout<<"\nearned $"<<pieceWorker.earnings()<<"\n\n";
    pieceWorker.print();
    vector<Employee *>employees(5);
    employees[0]=&salariedEmployee;
    employees[1]=&commissionEmployee;
    employees[2]=&basePlusCommissionEmployee;
    employees[3]=&hourlyWorker;
    employees[4]=&pieceWorker;
    cout<<"Employees processed polymorphically via dynamic binding:\n\n";
    cout<<"Virtual function calls made off base-class pointers:\n\n";
    for(const Employee *employeePtr:employees)
        virtualViaPointer(employeePtr);
    cout<<"Virtual funtion calls made off base-class references:\n\n";
    for(const Employee *employeePtr : employees)
        virtualViaReference(*employeePtr);
}
void virtualViaPointer(const Employee *const baseClassPtr)
{
    baseClassPtr->print();
}
void virtualViaReference(const Employee &baseClassRef)
{
    baseClassRef.print();
    cout<<"\nearned $"<<baseClassRef.earnings()<<"\n\n";
}
