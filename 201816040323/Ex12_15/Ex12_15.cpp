#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "HourlyEmployee.h"
#include "PieceWorker.h"
using namespace std;

void virtualViaPointer(const Employee * const);

int main()
{
     // set floating-point output formatting
    cout<< fixed << setprecision(2);
    PieceWorker a("Bob","Lewis","111",10,5);
    HourlyEmployee b("John","Smith","222",8,50);

    vector<Employee *>employees(2);
    employees[0]=&a;
    employees[1]=&b;
    for(const Employee *employeePtr : employees)
        virtualViaPointer(employeePtr);

}
void virtualViaPointer(const Employee * const baseClassPtr)
{
    baseClassPtr->print();
    cout << "\nearned is:" << baseClassPtr->earnings() << "\n\n";
}
