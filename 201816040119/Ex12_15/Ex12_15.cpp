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
void virtualViaPointer(const Employee *const);
void virtualViaReference(const Employee &);
int main()
{
    cout << fixed<<setprecision(2);
    SalariedEmployee salariedEmployee("John","Smith","111-11-1111",800);
    CommissionEmployee commissionEmployee("Sue","Jones","333-33-3333",10000,.06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-4444",5000,.04,300);
    PieceWorker pieceWorker("Doctor","Strange","100-11-1100",500.0,25.0);//创建PieceWorker对象
    HourlyWorker hourlyWorker("Luo","Yang","666-66-2333",150,45);//创建HourlyWorker对象
    cout<<"Employees processed individually using static binding:\n\n";
    salariedEmployee.print();
    cout<<"\nearned $"<<salariedEmployee.earning()<<"\n\n";
    commissionEmployee.print();
    cout<<"\nearned $"<<commissionEmployee.earning()<<"\n\n";
    basePlusCommissionEmployee.print();
    cout<<"\nearned $"<<basePlusCommissionEmployee.earning()<<"\n\n";
    pieceWorker.print();//输出pieceWorker信息
    cout<<"\nearned $"<<pieceWorker.earning()<<"\n\n";
    hourlyWorker.print();//输出hourlyWorker信息
    cout<<"\nearned $"<<hourlyWorker.earning()<<"\n\n";
    vector<Employee *>employees(5);
    employees[0]=&salariedEmployee;
    employees[1]=&commissionEmployee;
    employees[2]=&basePlusCommissionEmployee;
    employees[3]=&pieceWorker;//令基类指针指向PieceWorker对象
    employees[4]=&hourlyWorker;//令基类指针指向HourlyWorker对象
    cout<<"Employee processed polymorphically via dynamic binding:\n\n";
    cout<<"Virtual function calls made off base-class pointers:\n\n";
    for(const Employee *employeePtr:employees)
        virtualViaPointer(employeePtr);
    cout<<"Virtual function calls made off base-class references:\n\n";
    for(const Employee *employeePtr:employees)
        virtualViaReference(*employeePtr);
}
void virtualViaPointer(const Employee* const baseClassPtr)
{
    baseClassPtr->print();
    cout<<"\nearned $"<<baseClassPtr->earning()<<"\n\n";
}
void virtualViaReference(const Employee &baseClassRef)
{
    baseClassRef.print();
    cout<<"\nearned $"<<baseClassRef.earning()<<"\n\n";
}
