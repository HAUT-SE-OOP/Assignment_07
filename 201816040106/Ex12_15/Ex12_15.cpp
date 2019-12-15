#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"
using namespace std;
int main()
{
	SalariedEmployee salariedEmployee("James","Harden","000-00-0000",800);
	CommissionEmployee commissionEmployee("Kyle","Iring","333-33-3333",10000,.06);
	BasePlusCommissionEmployee basePlusCommissionEmployee("Kevin","Durant","444-44-4444",5000,.04,300);
	PieceWorker pieceWorker("Lebron","James","555-55-5555",4,50);
	HourlyWorker hourlyEmployee("Stephen","Curry","666-66-6666",3,50);
	vector<Employee *>employees(5);
	employees[0]=&salariedEmployee;
	employees[1]=&commissionEmployee;
	employees[2]=&basePlusCommissionEmployee;
	employees[3]=&pieceWorker;
	employees[4]=&hourlyEmployee;
	cout<<"Employees processed polymorphically via dynamic binding:\n\n";
	for(Employee *employeePtr:employees)
	{
		employeePtr->print();
	    cout<<endl;
		cout<<"The earnings :"<<employeePtr->earnings()<<endl;
	}
	
	
}
