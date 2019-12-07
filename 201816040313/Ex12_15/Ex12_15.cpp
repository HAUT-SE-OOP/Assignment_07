#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "Employee.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "SalariedEmployee.h"
#include <vector>
using namespace std;

void virtualViaPointer(const Employee * const);
int main()
{
    cout<<fixed<<setprecision(2);
    vector<Employee *>employees(5);//create vector of two base-class pointers
    //initislize vector with pointers to Employees
    employees[0]= new PieceWorker("John","Smith","111-11-1111",5.0,20);
    employees[1]= new HourlyWorker("Poll","Crisp","222-22-2222",5.0,50);
    employees[2]= new SalariedEmployee("Kevin","Dulant","333-33-3333",800);
    employees[3]= new CommissionEmployee("Delic","Rose","444-44-4444",10000, .06);
    employees[4]= new BasePlusCommissionEmployee("Kevri","ouwin","555-55-5555",5000, .04,300);
    for(const Employee *employeePtr:employees)
    {
        virtualViaPointer(employeePtr);
    }

}
void virtualViaPointer(const Employee * const baseClassPtr)
{
        baseClassPtr->print();
        cout<<"\nearned $ "<<baseClassPtr->earnings()<<"\n\n";
}
