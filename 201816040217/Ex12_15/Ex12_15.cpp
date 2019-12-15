#include <iostream>
#include<bits/stdc++.h>
#include"Employee.h"
#include"SalariedEmployee.h"
#include"CommissionEmployee.h"
#include"BasePlusCommissionEmployee.h"
#include"HourlyEmployee.h"
#include"PieceWorker.h"
using namespace std;


void virtualViaPointer(const Employee *const);
void virtualViaReference(const Employee& );


int main()
{
    cout << fixed<<setprecision(2);


    SalariedEmployee salariedEmployee("John","Smith","111-11-1111",800);

    CommissionEmployee commissionEmployee("Sue","Jones","333-33-3333",10000,.06);

    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-4444",5000,.04,300);

    HourlyEmployee hourlyEmployee("Bob","Smith","555-55-5555",10,41);

    PieceWorker pieceWorker("Han","Dav","666-66-6666",20,10);

    cout<<"Employees processed inividually using static binding:\n\n";

    salariedEmployee.print();
    cout<<"\nearned $"<<salariedEmployee.earnings()<<"\n\n";
    commissionEmployee.print();
    cout<<"\nearned $"<<commissionEmployee.earnings()<<"\n\n";
    basePlusCommissionEmployee.print();
    cout<<"\nearned $" <<  basePlusCommissionEmployee.earnings()<<"\n\n";
    hourlyEmployee.print();
    cout<<"\nearned $" <<  hourlyEmployee.earnings()<<"\n\n";
    pieceWorker.print();
    cout<<"\nearned $" <<  pieceWorker.earnings()<<"\n\n";



    vector<Employee *>employees(5);

    employees[0]= &salariedEmployee;
    employees[1]= &commissionEmployee;
    employees[2]= &basePlusCommissionEmployee;
    employees[3]= &hourlyEmployee;
    employees[4]= &pieceWorker;

    cout<<"Employees processed polymorphically via dynamic biniding:\n\n";

    cout<<"Virtual funcition calls made off base-class pointers:\n\n";

    for(const Employee *employeePtr:employees)
        virtualViaPointer(employeePtr);
    cout<<"Virtual function calls made off base-class references:\n\n";
    for(const Employee *employeePtr:employees)
        virtualViaReference(*employeePtr);


}

void virtualViaPointer(const Employee *const baseClassPtr)
{
    baseClassPtr->print();
    cout<< "\nearned $"<<baseClassPtr->earnings()<<"\n\n";
}

void virtualViaReference(const Employee &baseClassRef)
{
    baseClassRef.print();
    cout<<"\nearned $"<<baseClassRef.earnings()<<"\n\n";
}
