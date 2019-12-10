//Ex12_15.cpp
//processing Employee derived_class object individually
#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "HourlyWorker.h"
#include "PieceWorker.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"

using namespace std;


void virtualViaPointer( Employee *);//prototype
void virtualViaReference( Employee &);//prototype

int main()
{
    //set floatint-point output formatting
    cout<<fixed<<setprecision(2);
    //create derived-class object
    HourlyWorker hourlyWorker("Sue","Jones","111-111-111",20,100);
    PieceWorker pieceWorker("Bob","Lewis","444-444-444",20,50);
    SalariedEmployee salariedEmployee("John","Smith","222-22-222",800);
    CommissionEmployee commissionEmployee("Sue","Jones","333-33-333",10000,.06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","555-55-555",5000,.04,300);

    cout<<"Employee processed individually using static binding:\n\n";

    //output each employee's information and earnings using static binding
    hourlyWorker.print();
    cout<<"\nearned $"<<hourlyWorker.earnings()<<"\n\n";
    pieceWorker.print();
    cout<<"\nearned $"<<pieceWorker.earnings()<<"\n\n";
    salariedEmployee.print();
    cout<<"\nearned $"<<salariedEmployee.earnings()<<"\n\n";
    commissionEmployee.print();
    cout<<"\nearned $"<<commissionEmployee.earnings()<<"\n\n";
    basePlusCommissionEmployee.print();
    cout<<"\nearned $"<<basePlusCommissionEmployee.earnings()<<"\n\n";

    //create vector of twp base-class pointers
    vector<Employee *>employees(5);

    //initialize vector with pointers to employees
    employees[0]=&hourlyWorker;
    employees[1]=&pieceWorker;
    employees[2]=&salariedEmployee;
    employees[3]=&commissionEmployee;
    employees[4]=&basePlusCommissionEmployee;

    cout<<"Employee processed polymorphically via dynamic binding:\n\n";

    //call virtualViaPointer to print each employee's information
    //and earnings using dynamic binding
    cout<<"virtual function calls made off base-class pointers:\n\n";

    for( Employee *employeePtr : employees)
    {
        virtualViaPointer(employeePtr);
    }
    for( Employee *employeePtr : employees)
    {
        virtualViaReference(*employeePtr);
    }
}//end main

void virtualViaPointer( Employee * baseClassPtr)
{
    baseClassPtr->print();
    cout<<"\nearned $"<<baseClassPtr->earnings()<<"\n\n";
}
void virtualViaReference( Employee &baseClassRef)
{
    baseClassRef.print();
    cout<<"\nearned $"<<baseClassRef.earnings()<<"\n\n";
}
