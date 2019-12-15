#include <iostream>
#include<iomanip>
#include<vector>
#include"Employee.h"
#include"SalariedEmployee.h"
#include"CommissionEmployee.h"
#include"BasePlusCommissionEmployee.h"
#include"HourlyWoker.h"
#include"PieceWoker.h"
using namespace std;
int main()
{
   cout<<fixed<<setprecision(2);
   SalariedEmployee salariedEmployee("John","Smith","111-11-1111",800);
   CommissionEmployee  commissionEmployee ("Sue","Jones","333-33-3333",10000,.06);
   BasePlusCommissionEmployee  basePlusCommissionEmployee("BoB","Lews","444-44-4444",5000,.04,300);
   HourlyWorker hourlyWorker("Rose","Jones","222-22-2222",20,50);
   PieceWorker pieceWorker("Lisa","Smith","666-66-6666",50,10);
   vector<Employee*>employeea(5);
   employeea[0]=&salariedEmployee;
   employeea[1]=&commissionEmployee;
   employeea[2]=&basePlusCommissionEmployee;
   employeea[3]=&hourlyWorker;
   employeea[4]=&pieceWorker;
   for(size_t i=0;i<employeea.size();i++)
   {
       employeea[i]->print();
        cout<<"\nearned $"<<employeea[i]->earnings()<<"\n\n";
   }
   return 0;
}
