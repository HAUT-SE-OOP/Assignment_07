//
// Created by Administrator on 2019/12/14.
//
#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "PieceWorker.h"
#include "HourlyEmployee.h"

using namespace std;

int main()
{
    cout << fixed << setprecision(2);

    SalariedEmployee salariedEmployee("liu","Xiao","111-11-1111",1000);
    CommissionEmployee commissionEmployee("xiao", "lao", "222-22-2222", 10000, 0.08);
    BasePlusCommissionEmployee basePlusCommissionEmployee("giao", "Xaio", "333-33-3333", 5000, 0.04, 300);
    PieceWorker pieceWorker("kang", "Xaio", "444-44-4444", 10000, 0.06);
    HourlyEmployee hourlyEmployee("hua", "Xiao", "555-55-5555", 50, 16);

    vector <Employee *>employees(5);
    employees[0]=&salariedEmployee;
    employees[1]=&commissionEmployee;
    employees[2]=&basePlusCommissionEmployee;
    employees[3]=&pieceWorker;
    employees[4]=&hourlyEmployee;


    employees[0]->print();
    cout<< employees[0]->earnings()<<endl;
    employees[1]->print();
    cout<< employees[1]->earnings()<<endl;
    employees[2]->print();cout<< employees[2]->earnings()<<endl;
    employees[3]->print();cout<< employees[3]->earnings()<<endl;
    employees[4]->print();cout<< employees[4]->earnings()<<endl;

}