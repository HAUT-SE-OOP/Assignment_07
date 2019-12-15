#include <iostream>
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
void virtualViaReference(const Employee * &);
int main()
{
    cout << fixed <<setprecision(2);
    SalariedEmployee salariedEmployee("John", "Smith", "111-111-111", "800");
    CommissionEmployee commissionEmployee("Sue", "John", "333-333-333", "10000", ".06") ;
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "444-444-444", "5000", ".04", "300");
    PieceWorker pieceWorker("Make", "Li", "222-222-222", "50", "100");
    HourlyEmployee hourlyEmployee("Mary", "Su", "666-666-666", "60", "35");
    cout << "Employees processed individually using static binding : \n\n";
    salariedEmployee.print();
    cout << "\nearned $" << salariedEmployee.earnings() << "\n\n";
    commissionEmployee.print();
    cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";
    basePlusCommissionEmployee.print();
    cout << "\nearned $" << basePlusCommissionEmployee.earnings() << "\n\n";
    pieceWorker.print();
    cout << "\nearned $ " <<pieceWorker.earnings() << "\n\n";
    hourlyEmployee.print();
    cout << "\nearned $ " <<hourlyEmployee.earnings() << "\n\n";
    vector< Employee*>employee(5);
    employee[1]= &salariedEmployee;
    employee[2]= &commissionEmployee;
    employee[3]= &basePlusCommissionEmployee;
    employee[4]= &pieceWorker;
    employee[5]= &hourlyEmployee;
    cout <<"Employee processed individually via dynamic binding:\n\n";
    cout << "Virtual function calls made off basea-class pointers :\n\n";
    for(const Employee * employeePtr : employees)
        virtualViaPointer(employeePtr);
    cout <<"Virtual function calls made off basea-class references: \n\n";
     for(const Employee * employeePtr : employees)
        virtualViaPointer(employeePtr);
        void virtualViaPointer(const Employee * const baseClassPtr)
        {
            baseClassPtr -> print();
            cout << "\nearned $" << baseClassPtr -> earnings() << "\n\n";
        }
    void virtualViaReference(const Employee &baseClassRef)
    {
        baseClassRef.print();
        cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
    }
}

