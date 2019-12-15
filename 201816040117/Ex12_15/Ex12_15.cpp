#include <iostream>
#include"Employee.h"
#include"SalariedEmployee.h"
#include"CommissionEmployee.h"
#include"HourlyWorker.h"
#include"PieceWorker.h"
#include"BasePlusCommissionEmployee.h"
#include<vector>
using namespace std;

int main()
{
    vector<Employee*>employ(4);
    employ[0]=new BasePlusCommissionEmployee("John","White","201816",20000,0.05,3000);
    employ[1]=new SalariedEmployee("Ki","Black","201817",1000);
    employ[2]=new HourlyWorker("Ti","Blue","201818",15,150);
    employ[3]=new PieceWorker("Vi","Green","201819",1,2000);
    employ[0]->print();
    cout<<endl;
    cout<<"earnings:"<<employ[0]->earnings();
    cout<<endl<<endl;
    employ[1]->print();
    cout<<endl;
    cout<<"earnings:"<<employ[1]->earnings();
    cout<<endl<<endl;
    employ[2]->print();
    cout<<endl;
    cout<<"earnings:"<<employ[2]->earnings();
    cout<<endl<<endl;
    employ[3]->print();
    cout<<endl;
    cout<<"earnings:"<<employ[3]->earnings();
    cout<<endl;

}
