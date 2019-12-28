#include <iostream>
#include <string>
#include<vector>
#include "HourlyEmployee.h"
#include "PieceWork.h"
#include "Employee.h"
using namespace std;

int main()
{
 vector<Employee*>employee(2);
 employee[0]= new PieceWorker("a","b","c", 5, 80);
 employee[1]= new HourlyEmployee("a","b","c", 5, 80);
 employee[0]->print();
 cout<<"earnings:"<<employee[0]->earnings()<<endl;
 employee[1]->print();
 cout<<"earnings:"<<employee[1]->earnings()<<endl;

}
