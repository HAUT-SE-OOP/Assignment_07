#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.cpp"
#include "SalariedEmployee.cpp"
#include "CommissionEmployee.cpp"
#include "BasePlusCommissionEmployee.cpp"
#include "PieceWorker.cpp"
#include "HourlyWorker.cpp"
using namespace std;

int main()
{
	cout<<fixed<<setprecision(2);
	
	SalariedEmployee salariedEmployee("John","Smith","111-11-1111",800);
	CommissionEmployee commissionEmployee("Sue","Jones","333-33-3333",10000,.06);
	BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-4444",5000,.04,300);
	PieceWorker pieceWorker("David","Chen","555-55-5555",10,20);
	HourlyWorker hourlyWorker("Mike","Huang","666-66-6666",70,70);
	
	vector<Employee *>employees(5);
	
	employees[0] = &salariedEmployee;
	employees[1] = &commissionEmployee;
	employees[2] = &basePlusCommissionEmployee;
	employees[3] = &pieceWorker;
	employees[4] = &hourlyWorker;
	
	cout<<"Employees processed polymorphically via dynamic binding:\n\n";
	
	for ( const Employee *employeePtr : employees)
	{
	   employeePtr->print();
    }
	
}
