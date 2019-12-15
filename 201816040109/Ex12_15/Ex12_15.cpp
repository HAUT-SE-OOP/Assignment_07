#include <iostream>
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "HourlyWorker.h"
#include "PieceWorker.h"
#include "SalariedEmployee.h"
#include <vector>
using namespace std;
int main()
{
	vector<Employee *> e(5);
	e[0] = new SalariedEmployee("John", "Smith", "111-11-1111", 800);
	e[1] = new PieceWorker("Mariah", " Carey", "222-22-2222", 5.0, 200);
	e[2] = new CommissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06);
	e[3] = new BasePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 5000, .04, 300);
	e[4] = new HourlyWorker("Nicolas", "Cage", "555-55-5555", 50.5, 74.5);
	for(int i=0;i<5;i++)
	{
		e[i]->print();
		cout<<endl;
	}
}
