#include<iostream>
#include<iomanip>
#include<vector>
#include"Employee.h"
#include"SalariedEmployee.h"
#include"CommissionEmployee.h"
#include"BasePlusCommissionEmployee.h"
#include"PieceWorker.h"
#include"HourlyWorker.h"
using namespace std;

void virtualViaPointer(const Employee*const);
void virtualViareference(const Employee&);

int main()
{
    cout<<fixed<<setprecision(4);

   SalariedEmployee salariedEmployee("John","Smith","111-11-1111",800);
   CommissionEmployee commissionEmployee("Sue","Jones","333-33-3333",10000,0.06);
   BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-4444",5000,0.04,300);
   PieceWorker pieceWorker("Alice","Smith","222-22-2222",50,200);
   HourlyWorker hourlyWorker1("Amy","Lewis","555-55-5555",60,35);
   HourlyWorker hourlyWorker2("Alma","Jones","666-66-6666",60,76);

   cout<<"Employees processed individually using static binding:\n\n";

   salariedEmployee.print();
   cout<<"\nearned $"<<salariedEmployee.earnings()<<"\n\n";
   commissionEmployee.print();
   cout<<"\nearned $"<<commissionEmployee.earnings()<<"\n\n";
   basePlusCommissionEmployee.print();
   cout<<"\nearned $"<<basePlusCommissionEmployee.earnings()<<"\n\n";

   vector<Employee*>employee(6);

   employee[0]=&salariedEmployee;
   employee[1]=&commissionEmployee;
   employee[2]=&basePlusCommissionEmployee;
   employee[3]=&pieceWorker;
   employee[4]=&hourlyWorker1;
   employee[5]=&hourlyWorker2;

   cout<<"Employees processed polymorphically via dynamic binding:\n\n";

   cout<<"virtual function calls made off base-class pointers:\n\n";
   for(const Employee *employeePtr : employee)
    virtualViaPointer(employeePtr);

   cout<<"Virtual function calls made off base-class references:\n\n";
   for(const Employee *employeePtr : employee)
    virtualViareference(*employeePtr);

}
   void virtualViaPointer(const Employee*const baseClassPtr)
   {
       baseClassPtr->print();
       cout<<"\nearned $"<<baseClassPtr->earnings()<<"\n\n";
   }

   void virtualViaReference(const Employee &baseClassRef)
   {
       baseClassRef.print();
       cout<<"\nearned $"<<baseClassRef.earnings()<<"\n\n";
   }
