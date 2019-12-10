#include <iostream>
#include <stdexcept>
#include "Employee.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
#include "SalariedEmployee.h"
#include <vector>

using namespace std;

int main()
{
    vector<Employee*>employee(5);
    employee[0]= new PieceWorker("yan","h_k","012345",1, 2);
    employee[1]= new HourlyWorker("zhang","q_a","123456",3 ,4);
    employee[2]= new SalariedEmployee("wang","h_l","234567",100);
    employee[3]= new CommissionEmployee("piao","s_y","345678",1000,0.05);
    employee[4]= new BasePlusCommissionEmployee("zhao","Q_Q","456789",400,0.03,300);

    for(size_t i=0;i<employee.size();++i)
    {
        cout<<"This is employ[ "<<i <<" ] :\n";
        employee[i]->print();
        cout<<"\n\n\n";
    }

    return 0;
}
