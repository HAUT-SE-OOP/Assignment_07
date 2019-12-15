#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "HourlyWorker.h"
#include "PieceWorker.h"
using namespace std;

void virtualViaPointer(const Employee * const);

int main()
{
    cout<< fixed << setprecision(2);
    PieceWorker p("zhang","yao","030500",10.0,5.0);
    HourlyWorker h("li","Si","020560",80.0,4.0);

    vector<Employee *>e(2);
    e[0]=&p;
    e[1]=&h;
    for(const Employee *employeePtr : e)
        virtualViaPointer(employeePtr);

}
void virtualViaPointer(const Employee * const baseClassPtr)
{
    baseClassPtr->print();
    cout << "\nearned is:" << baseClassPtr->earnings() << "\n\n";
}
