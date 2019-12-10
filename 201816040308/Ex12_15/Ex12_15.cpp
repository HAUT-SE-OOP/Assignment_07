#include <bits/stdc++.h>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"
using namespace std;

int main()
{
    cout<<fixed<<setprecision(2);
    vector<Employee *> employee(5);
    employee[0] = new SalariedEmployee("John","Smith","111-11-1111",800);
    employee[1] = new CommissionEmployee("Sue","Jones","333-33-3333",10000,0.06);
    employee[2] = new BasePlusCommissionEmployee("Bob","Lewis","444-44-4444",5000,0.04,300);
    employee[3] = new PieceWorker("Hoe","Shemy","777-77-7777",40,50);
    employee[4] = new HourlyWorker("Pit","Keety","999-99-9999",40,50);
    for(Employee *employeeptr : employee){
        employeeptr->print();
        cout<<"\nearned "<<employeeptr->earnings()<<endl<<endl;
    }
    return 0;
}
