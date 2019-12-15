#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "PieceWorker.h"
#include "HourlyEmployee.h"
using namespace std;

void virtualViaPointer(const Employee * const);

int main()
{
    cout << fixed << setprecision(2);
    SalariedEmployee salariedEmployee("John","Smith","111111111111",800);
    CommissionEmployee commissionEmployee("Sue","Jones","2222222223",10000,.06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","1111111111",5000,.04,30);
    HourlyEmployee hourlyEmployee("hong","xaio","2222222222",700,40);
    PieceWorker pieceworker("qiang","xoio","5555555555555",900,50);
    cout <<"Employee:" "\n\n";
    salariedEmployee.print();
    cout << "\nearned " <<  salariedEmployee.earnings() << endl;
    commissionEmployee.print();
     cout << "\nearned $" <<  commissionEmployee.earnings() << endl;
     basePlusCommissionEmployee.print();
     cout << "\nearned $" <<  basePlusCommissionEmployee.earnings() << endl;
     vector <Employee *> employees (5) ;
     employees[0] = &salariedEmployee;
     employees[1] = &commissionEmployee;
     employees[2] = &basePlusCommissionEmployee;
     employees[3] = &hourlyEmployee;
     employees[4] = &pieceWorker;
     cout << "Employees processed polymorphically via dynamic binding:\n\n" ;
     cout << "Virtual function calls made off base-class pointers:\n\n";
     for(const Employee *employeePtr : employees)
        virtualViaPointer(employeePtr);
}



    void virtualViaPointer(const Employee * const baseClassPtr)
    {
        baseClassPtr -> print();
        cout << "\nearned $" <<  baseClassPtr -> earnings() << "\n\n";
    }
