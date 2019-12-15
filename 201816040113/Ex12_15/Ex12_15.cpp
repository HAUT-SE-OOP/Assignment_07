//Test.cpp

#include <iostream>
#include <stdexcept>
#include <vector>
#include "Employee.h"
#include "HourlyWorker.h"
#include "PieceWorker.h"
using namespace std;

int main()
{
    HourlyWorker hourlyWorker("John","Smith","111-11-1111",15,60);
    PieceWorker pieceWorker("Sue","Jones","222-22-2222",1.5,88);

    //create vector of two base-class pointers
    vector<Employee *>employees(2);

    //initialize vector with pointers to Employee
    employees[0]=&hourlyWorker;
    employees[1]=&pieceWorker;

    cout<<"For HourlyWorker:"<<endl;
    employees[0]->print();
    cout<<endl<<endl<<endl;

    cout<<"For PieceWorker:"<<endl;
    employees[1]->print();
    cout<<endl<<endl<<endl;
}
