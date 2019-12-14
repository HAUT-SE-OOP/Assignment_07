//Ex12_15.cpp
#include<iostream>
#include<iomanip>
#include<vector>
#include"Employee.h"
#include"SalariedEmployee.h"
#include"CommissionEmployee.h"
#include"BasePlusCommissionEmployee.h"
#include"PieceWorker.h"
#include"HourlyEmployee.h"

using namespace std;



int main()
{
    //set floating-point output formatting
    cout << fixed << setprecision(2);


    SalariedEmployee salariedEmployee("John","Smith","111-11-1111",800);
    CommissionEmployee commissionEmployee("Sue","Jones","222-22-2222",10000,.06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","333-33-3333",5000,.04,300);
    PieceWorker pieceWorker("Andy","Green","444-44-4444",10.5,7);
    HourlyEmployee hourlyEmployee("Tom","Brown","555-55-5555",10.5,50);


    vector < Employee * > employees(5);

    //initialize vector with pointers to Employees
    employees[0]=&salariedEmployee;
    employees[1]=&commissionEmployee;
    employees[2]=&basePlusCommissionEmployee;
    employees[3]=&pieceWorker;
    employees[4]=&hourlyEmployee;
    cout << "Employees processed polymorphically via dynamic binding: \n\n";

    cout << "Virtual function calls made off base-class pointer;\n\n";
   for(size_t i=0; i<employees.size(); i++)
    {
        employees[i]->print();

        cout << "\nearned: $ " << employees[i]->earnings() << "\n\n";
    }

}

