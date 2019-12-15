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
    vector<Employee *>employees(5);
    employees[0]=new SalariedEmployee("John","Smith","111-11-111",800);
    employees[1]=new CommissionEmployee("Sue","Jone","333-33-333",10000,.06);
    employees[2]=new BasePlusCommissionEmployee("Bob","Lewis","444-44-444",5000,.04,300);
    employees[3]=new PieceWorker("Bob","A","555-55-555",5.0,10);
    employees[4]=new HourlyWorker("Bob","B","666-66-666",5,50);
    for(Employee *employeePtr:employees)
	{
		employeePtr->print();
	  cout<<endl;
		cout<<"The earnings :"<<employeePtr->earnings();
		cout<<endl;
		cout<<endl;
	}
}
