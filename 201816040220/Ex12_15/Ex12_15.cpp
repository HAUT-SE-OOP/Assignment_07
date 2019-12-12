#include <iostream>
#include <stdexcept>
#include <vector>
#include "Employee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "SalariedEmployee.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"

using namespace std;

int main()
{
    vector <Employee *> employees(5);

    employees[0]= new SalariedEmployee("Bob","Jin","11111",500);
    employees[1]= new CommissionEmployee("John","Whiter","22222",500,0.1);
    employees[2]= new BasePlusCommissionEmployee("Jon","Xuenuo","33333",500,0.10,50);
    employees[3]= new PieceWorker("Black","Sua","44444",50, 30);
    employees[4]= new HourlyWorker("Susan","Pub","55555",15 ,60);

    for(Employee *employeePtr : employees)
    {

        employeePtr->print();
        cout<<endl<<endl;
    }

    return 0;
}
