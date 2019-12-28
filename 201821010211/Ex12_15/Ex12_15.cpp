#include <iostream>
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
    vector <Employee*>Employees(2);
     Employees[0]=new HourlyEmployee("z","l","1999",20,6);
     Employees[1]=new PieceWorker("Z","L","0101",20,6);
     cout << fixed << setprecision( 2 );
     for ( size_t i = 0; i < Employees.size(); i++ )
     {
         Employees[i]->print();
         cout<<Employees[i]->earnings()<<endl;
     }
}
