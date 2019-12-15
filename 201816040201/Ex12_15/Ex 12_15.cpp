#include<bits/stdc++.h>
#include"Employee.h"
#include"BasePlusCommissionEmployee.h"
#include"CommissionEmployee.h"
#include"SalariedEmployee.h"
#include"HourlyWorker.h"
#include"PieceWorker.h"
using namespace std;
int main()
{
    vector<Employee *> empt(10);
    empt[0]=new BasePlusCommissionEmployee("Bob","HBack","666-666-666",5000,.04,300);
    empt[1]=new CommissionEmployee("Jim","Wilsion","233-2333-23",1000,.06);
    empt[2]=new SalariedEmployee("Gregloty","House","11111-2222-33",800);
    empt[3]=new HourlyWorker("Barny","Stansion","556-886-779",41,39);
    empt[4]=new PieceWorker("Ray","Matter","110-119-120",50,50);
    for(int i=0;i<5;i++)
    {
        empt[i]->print();
        cout<<"earnings:\n"<<empt[i]->earnings()<<endl;
    }
}
