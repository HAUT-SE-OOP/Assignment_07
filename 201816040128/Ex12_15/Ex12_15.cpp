#include <iostream>
#include"Employee.h"
#include"HourlyWorker.h"
#include"PieceWorker.h"

using namespace std;

int main()
{
	Employee * hourlyWorker = & HourlyWorker(10, 10);
	Employee * pieceWorker = & PieceWorker(10, 10);
	cout << "计时收费的：";
	cout<< hourlyWorker->earings();
	cout << "\n计件数收费的：";
	cout << pieceWorker->earings();


}

