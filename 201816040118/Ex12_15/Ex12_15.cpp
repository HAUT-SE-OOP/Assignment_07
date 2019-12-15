#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include "Employee.h"
#include "HourlyWorker.h"
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "PieceWorker.h"
#include "SalariedEmployee.h"
using namespace std;

int main()
{
	SalariedEmployee salariedEmployee("John", "Smith", "111-11-1111", 800);
	CommissionEmployee commissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06);
	BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 5000, .04, 300);
	HourlyWorker hourlyWorker("A", "B", "555-55-5555", 50, 10);
	PieceWorker pieceWorker("C". "D", "666-66-6666", 100, 5);
	
	vector <Employee*> employees(5);
	employees[0] = &salariedEmployee;
	employees[1] = &commissionEmployee;
	employees[2] = &basePlusCommissionEmployee;
	employees[3] = &hourlyWorker;
	employees[4] = &pieceWorker;

	for (const Employee* employeePtr : employees)
	{
		cout << employeePtr->earnings()
			<< employeePtr->print << endl;
	}
}
