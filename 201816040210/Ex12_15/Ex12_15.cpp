#include<bits/stdc++.h>
using namespace std;
#include"Employee.h"
#include"CommissionEmployee.h"
#include"BasePlusCommissionEmployee.h"
#include"SalariedEmployee.h"
#include"HourlyEmployee.h"
#include"PieceWorker.h"
int main()
{
   //create a salaried employee and print
   SalariedEmployee salariedemployee( "Tony","Stark","1115-165616", 1000.0 );
   salariedemployee.print();
   cout<<"earned: "<<salariedemployee.earnings()<<"\n"<<endl;
   //create a commission employee and print
   CommissionEmployee commissionemployee( "Peter","Parker","2225-651651",5000, .04 );
   commissionemployee.print();
   cout<<"earned: "<<commissionemployee.earnings()<<"\n"<<endl;
   //create a base plus commission employee and print
   BasePlusCommissionEmployee basepluscommissionemployee( "Steven","Rogers","3335-333765",5000, .04, 1000 );
   basepluscommissionemployee.print();
   cout<<"earned: "<<basepluscommissionemployee.earnings()<<"\n"<<endl;
   //create a hourly employee and print
   HourlyEmployee hourlyemployee ( "Thor","Odinson","4445-719621",50,2 );
   hourlyemployee.print();
   cout<<"earned: "<<hourlyemployee.earnings()<<"\n"<<endl;
   //create a piece worker and print
   PieceWorker pieceworker ("Bruce","Banner","5551-648516",200,3 );
   pieceworker.print();
   cout<<"earned: "<<pieceworker.earnings()<<"\n\n********************************************\n\n";

   vector< Employee * > employee(5);//create vector of five base-class pointers

   //initialize vector with pointers to Employees
   employee[0] = &salariedemployee;
   employee[1] = &commissionemployee;
   employee[2] = &basepluscommissionemployee;
   employee[3] = &hourlyemployee;
   employee[4] = &pieceworker;

   //print each Employee's information
   for(int i=0;i<=4;++i)
   {
       employee[i]->print();
       cout<<"earned: "<<employee[i]->earnings()<<"\n"<<endl;
   }
    return 0;
}//end main
