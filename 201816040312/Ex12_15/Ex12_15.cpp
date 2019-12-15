#include<iostream>
#include<iomanip>
#include<vector>
#include"Employee.h"
#include"SalariedEmployee.h"
#include"CommissionEmployee.h"
#include"BasePlusCommissionEmployee.h"
#include"HourlyEmployee.h"
#include"PieceWorker.h"

using namespace std;
int main()
{
    vector<Employee*>employee(5);//声明五个Employee指针
    employee[0]=new CommissionEmployee("唐","一","001",12,0.2);//分别给五个指针赋值
    employee[1]=new SalariedEmployee("宋","二","002",13);
    employee[2]=new BasePlusCommissionEmployee("元","三","003",14,0.3,14);
    employee[3]=new HourlyEmployee("明","四","004",15,15);
    employee[4]=new PieceWorker("清","五","005",16,16);
    employee[0]->print();//输出Eployee指针所指向的五个数值
    cout<<"\n\n";
    employee[1]->print();
    cout<<"\n\n";
    employee[2]->print();
    cout<<"\n\n";
    employee[3]->print();
    cout<<"\n\n";
    employee[4]->print();
    //................
    /*vector<Employee*> employee(2);
    employee[0]=new CommissionEmployee("唐","一","001",12,0.2);
    employee[1]=new SalariedEmployee("宋","二","002",13);
    vector<CommissionEmployee*> commission(1);
    commission[0]=new BasePlusCommissionEmployee("元","三","003",14,0.3,14);
    vector<SalariedEmployee*> salary(2);
    salary[0]=new HourlyEmployee("明","四","004",15,15);
    salary[1]=new PieceWorker("清","五","005",16,16);
    employee[0]->print();
    cout<<"\n\n";
    employee[1]->print();
    cout<<"\n\n";
    commission[0]->print();
    cout<<"\n\n";
    salary[0]->print();
    cout<<"\n\n";
    salary[1]->print();*/
}
