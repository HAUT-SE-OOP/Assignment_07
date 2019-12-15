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
void virtualViaPointer(const Employee *const);
void virtualViaReference(const Employee &);
int main()
{
    cout<<fixed<<setprecision(2);
    SalariedEmployee salariedEmployee("John","Smith","11134546",666);//object
    CommissionEmployee commissionEmployee("Sue","Jones","3456768",10000,.06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","345465",5000,.04,300);
    PieceWorker pieceWorker("David","Yd","34564578",12,400);
    HourlyEmployee hourEmployee("Grog","five","2345365",8,300);
    vector<Employee *>employees(5);//pointer
    employees[0]=&salariedEmployee;
    employees[1]=&commissionEmployee;
    employees[2]=&basePlusCommissionEmployee;
    employees[3]=&pieceWorker;
    employees[4]=&hourEmployee;
    for(const Employee *employeePtr:employees)
        virtualViaPointer(employeePtr);
}
    void virtualViaPointer(const Employee * const baseClassPtr)
    {
        baseClassPtr->print();
        cout<<"\nearned "<<baseClassPtr->earnings()<<"\n\n";
    }

