#include <iostream>
#include <vector>
#include "HourlyEmployee.h"
#include "PieceWorker.h"
using namespace std;

int main() {
	vector<Employee*> ve;
	PieceWorker a(2.5, 10);
	HourlyWorker b(2.4, 20);
	ve.push_back(&a);
	ve.push_back(&b);

	for (int i = 0; i < ve.size(); ++i) {
		cout << "The earning is : ";
		cout << ve[i]->earnings() << "\n";
	}
	return 0;
}
