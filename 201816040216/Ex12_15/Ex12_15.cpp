#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariesEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "HourlyEmployee.h"
#include "PieceWorker.h"

using namespace std;

void virtualViaPointer(const Employee * const);
int main()
{
    vector<Employee *>employees(2);

    employees[0] = new PieceWorker("Bob","Jones","333-33333",10,30);
    employees[1] = new HourlyEmployee("John","Smith","222-22222",15,60);

    for(size_t i=0;i<=employees.size();i++)
    {
        employees[i]->print();
        cout<<"\nEmployee's salary:"<<employees[i]->earnings();
    }
}
