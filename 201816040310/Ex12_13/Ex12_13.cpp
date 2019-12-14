#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include <vector>
using namespace std;

int main()
{

	vector<Package *> packages(3);

	packages[0] = new OvernightPackage("Andrew", "Taofu", "St.LianHua", "Zhengzhou", "Henan", "05050", 2, 10, 4);
	packages[1] = new TwoDayPackage("Bob", "Tony", "St.Langya", "chuzhou", "Anhui", "12311", 5, 10, 4);
	packages[2] = new TwoDayPackage("Ken", "July", "Rd.JiangJunshan", "Nanjin", "Jiangsu", "05050", 2, 10, 4);
	double sum = 0;
	for (Package *item : packages)
	{
		item->print();
		double cost = item->calculateCost();
		cout << "COST: " << cost << endl;
		cout<<endl;
		sum += cost;
	}
	cout << "\n======Total Cost=======\n"
		 << sum<<endl;
}