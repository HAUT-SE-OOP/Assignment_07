//Ex12_15:Ex12_15.cpp
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

//main fuction
int main()
{
	//set floating point output foematting
	cout << fixed << setprecision(2);

	//create vector of three base-class pointers
	vector <Employee*>employees(5);

	//initialize vector with various kinds of Employee
	employees[0] = new SalariedEmployee("John", "Smith", "111-11-1111", 800);
	employees[1] = new CommissionEmployee("Sue", "Jones", "222-22-2222", 10000, .06);
	employees[2] = new BasePlusCommissionEmployee("Bob", "Lewis", "333-33-3333", 5000, .04, 300);
	employees[3] = new HourlyWorker("Yang", "Thomas", "444-44-4444", 80, 45);
	employees[4] = new PieceWorker("Aide", "Tom", "555-55-5555", 2, 2000);

	//print information of each employees
	for (Employee* employeePtr : employees)
	{
		employeePtr->print();
		cout << "\nEarnings: " << employeePtr->earnings();
		cout << endl;
	}

	return 0;
}
