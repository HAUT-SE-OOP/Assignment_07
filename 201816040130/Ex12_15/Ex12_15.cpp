#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmpolyee.h"
#include "CommissionEmployee.h"
#include "BasePluseEmployee.h"
#include "PieceWorker.h"
#include "HourlyEmpolyee.h"
using namespace std;

void virtualViaPointer(const Employee * const);

int main()
{
    cout << fixed << setprecision(2);
    SalariedEmployee salariedEmployee("John","Smith","111-11-1111",800);
    CommissionEmployee commissionEmployee("Sue","Jones","333-33-3333",10000,.06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-4444",5000,.04,30);
    HourlyEmployee hourlyEmployee("Ming","Li","222-22-2222",30,5);
    PieceWorker pieceworker("li","Li","555-55-5555",30,25);
    cout << "Employee processed individually using static binding:\n\n";
    salariedEmployee.print();
    cout << "\nearned $" <<  salariedEmployee.earnings() << "\n\n";
    commissionEmployee.print();
     cout << "\nearned $" <<  commissionEmployee.earnings() << "\n\n";
     basePlusCommissionEmployee.print();
     cout << "\nearned $" <<  basePlusCommissionEmployee.earnings() << "\n\n";
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


