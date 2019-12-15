#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include <cxxabi.h>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"
using namespace std;

int main()
{

    cout <<fixed <<setprecision(2);

    vector < Employee * > employees(5);
    employees[0] = new SalariedEmployee("John","Smith", "111-11-1111", 800);
    employees[1] = new CommissionEmployee("Sue", "Jones", "222-22-2222", 1000, .06);
    employees[2] = new BasePlusCommissionEmployee("Bob", "Lewis", "333-33-3333",5000,.04,300);
    employees[3] = new PieceWorker("Dave", "Pul", "444-44-4444",10,5000);
    employees[4] = new HourlyWorker("Hong", "Han", "555-55-5555",350,60);
    for( Employee *employeePtr : employees)
    {
        employeePtr->print();
        cout <<endl<< "earned $ :";
        cout<<employeePtr->earnings();
        cout<<endl<<endl;

    }
    for (const Employee * employeePtr :employees )
    {
        cout << "deleting object of"
        <<typeid ( *employeePtr).name() <<endl;
        delete employeePtr;
    }
    return 0;
}
