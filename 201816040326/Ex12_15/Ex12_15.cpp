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


int main()
{
    vector<Employee *>employees(5);
    employees[0]=new SalariedEmployee( "John","Smith","111-11-11111",800);
    employees[1]=new CommissionEmployee("Sue","Jones","333-33-3333",10000,0.06);
    employees[2]=new BasePlusCommissionEmployee("Bob","Lewis","444-44-444",5000,0.04,300);
    employees[3]=new PieceWorker("Krystal","Jessica","555-55-555",100,5);
    employees[4]=new HourlyEmployee("Judy","Lisa","666-66-666",100,10);
    for(Employee *empePtr : employees)
    {
        empePtr->print();
        cout<<endl<<endl<<endl;
    }

    return 0;
}
