#include<iostream>
#include<vector>
#include"Employee.h"
#include<iomanip>
#include"CommissionEmployee.h"
#include"SalariedEmployee.h"
#include"BasePlusCommissionEmployee.h"
#include"HourlyWorker.h"
#include"PieceWorker.h"
void virtualViaPointer(const Employee* const);

int main()
{
    cout<<fixed<<setprecision(2);
    SalariedEmployee salariedEmployee("John","Smith","111-11-1111",800);
    CommissionEmployee commissionEmployee("Sue","Jones","333-33-3333",10000,0.06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-4444",5000,0.04,300);
    HourlyWorker hourlyworker("yy","hh","999-99-9999",5,37);
    PieceWorker piecesworker("li","wen","444-44-4444",23,10);
    vector<Employee *>employees(5);
    employees[0]=&salariedEmployee;
    employees[1]=&commissionEmployee;
    employees[2]=&basePlusCommissionEmployee;
    employees[3]=&hourlyworker;
    employees[4]=&piecesworker;
    for(const Employee * employeeptr:employees)
    virtualViaPointer(employeeptr);


}//end main
void virtualViaPointer(const Employee * const  baseclassptr)
{
    baseclassptr->print();

}
