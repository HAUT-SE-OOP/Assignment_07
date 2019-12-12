#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "HourlyEmployee.h"
#include "PieceWorker.h"
using namespace std;

void virtualViaPointer(const Employee * const);
void virtualViaReference(const Employee &);

int main()
{
    cout << fixed << setprecision(2);
    SalariedEmployee SalariedEmployee("John", "Smith", "111-11-1111", 800);
    CommissionEmployee commissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 5000, .04, 300);
    PieceWorker pieceWorker("Mike", "lon", "222-22-2222", 1.2, 50);
    HourlyWorker hourlyWorker("Li", "Hua", "555-55-5555", 1.2, 45);

    cout << "Employees processed individually using static binding:\n\n";
    SalariedEmployee.print();
    cout << "\nearned $" << SalariedEmployee.earnings() << "\n\n";
    commissionEmployee.print();
    cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";
    basePlusCommissionEmployee.print();
    cout << "\nearned $" << basePlusCommissionEmployee.earnings() << "\n\n";
    pieceWorker.print();
    cout << "\nearned $" << pieceWorker.earnings() << "\n\n";
    hourlyWorker.print();
    cout << "\nearned $" << hourlyWorker.earnings() << "\n\n";

    vector <Employee *> employees(5);

    employees[0] = &SalariedEmployee;
    employees[1] = &commissionEmployee;
    employees[2] = &basePlusCommissionEmployee;
    employees[3] = &pieceWorker;
    employees[4] = &hourlyWorker;

    cout << "Employee process polymorphically via dynamic binding:\n\n";
    cout << "Virtual function calls made off base-class pointers:\n\n";

    for(const Employee *employeePtr : employees)
        virtualViaPointer(employeePtr);

    for(const Employee *employeePtr : employees)
        virtualViaReference( *employeePtr );
}

void virtualViaPointer(const Employee * const baseClassPtr)
{
    baseClassPtr->print();
    cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
}

void virtualViaReference( const Employee &baseClassRef)
{
    baseClassRef.print();
    cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
}
