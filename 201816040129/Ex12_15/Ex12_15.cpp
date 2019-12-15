#include<iostream>
#include<iomanip>
#include<vector>
#include"Employee.h"
#include"SalariedEmployee.h"
#include"CommissionEmployee.h"
#include"BasePlusCommissionEmployee.h"
#include"PieceWorker.h"
#include"HourlyEmployee.h"
using namespace std;

void virtualViaPointer(const Employee * const);

int main()
{
    cout<<fixed<<setprecision(2);
    SalariedEmployee salariedEmployee("John","Smith","111-11-1111",800);
    CommissionEmployee commissionEmployee("Sue","Jones","333-33-3333",10000,.06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-4444",5000,.04,300);
    PieceWorker pieceWorker("Bob","Smith","555-55-5555",300,10);
    HourlyEmployee hourlyEmployee("Mary","Smith","222-22-2222",300,20);


    vector<Employee *>employees(5);
    employees[0]=&salariedEmployee;
    employees[1]=&commissionEmployee;
    employees[2]=&basePlusCommissionEmployee;
    employees[3]=&pieceWorker;
    employees[4]=&hourlyEmployee;

    for(const Employee *employeePtr : employees)
       virtualViaPointer(employeePtr);

    cout<<"Virtual function calls made off base-class reference:\n\n";

}

    void virtualViaPointer(const Employee * const baseClassPtr)//base-class pointer using dynamic binding
    {
        baseClassPtr->print();
        cout<<"\nearned $"<<baseClassPtr->earnings()<<"\n\n";
    }
