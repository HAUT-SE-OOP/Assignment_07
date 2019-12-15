#include<iostream>
#include<string>
#include<vector>
#include"Employee.h"
#include"PieceWorker.h"
#include"HourlyWorker.h"
using namespace std;
int main()
{
    vector<Employee *>employees(2);
    employees[1]=new PieceWorker("John","Smith","111-11-1111",10,300);
    employees[2]=new HourlyWorker("Sue","Jones","222-22-2222",20,100);
    employees[1]->print();
    employees[2]->print();
    return 0;
}
