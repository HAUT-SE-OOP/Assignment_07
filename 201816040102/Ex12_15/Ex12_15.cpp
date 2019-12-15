#include <iostream> 
#include "BasePlusCommissionEmployee.h" 
#include "CommissionEmployee.h" 
#include "HourlyWorker.h" 
#include "PieceEmployee.h" 
#include "SalariedEmployee.h" 
#include <vector> 
using namespace std;
int main() 
{ 
	vector<Employee *> e(5); 
	e[0] = new SalariedEmployee("—œ", "∫∆øµ", "201816040101", 0); 
	e[1] = new PieceWorker("Õı", "∫¿¡º", "201816040102", 50.0, 20000); 
	e[2] = new CommissionEmployee("PJ", "Bob", "200000000000", 10000, 0.06); 
	e[3] = new BasePlusCommissionEmployee("Gabe", "Bob", "200000000001", 5000, 0.04, 300); 
	e[4] = new HourlyWorker("Charlie", "Bob", "200000000002", 50.5, 74.5); 
	for(int i=0;i<5;i++) 
	{ 
		e[i]->print(); 
		cout<<endl; 
	} 
}
