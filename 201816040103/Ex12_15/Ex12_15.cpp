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
	cout<<fixed<<setprecision(2);
	SalariedEmployee salariedEmployee("John","Smith","111-11-1111",800);
	CommissionEmployee commissionEmployee("Sue","Jones","333-33-3333",10000,.06);
	BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-4444",5000,.04,300);
	PieceWorker pieceWorker("Guowei","Shi","555-55-5555",50,50);
	HourlyEmployee hourlyEmployee("Jinghao","Mei","666-66-6666",3,50);
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
