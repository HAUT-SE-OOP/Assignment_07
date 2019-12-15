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

void virtualViaPointer ( const Employee * const ) ;
void virtualViaReference ( const Employee & );


int main()
{


    cout << fixed << setprecision ( 2 );

    SalariedEmployee salariedEmployee(
        "John" , "Smith" , "111-11-1111" , 800 );
    CommissionEmployee commissionEmployee(
        "Sue" , "Jones" ,"333-33-3333" , 10000 , .06 );
    BasePlusCommissionEmployee basePlusCommissionEmployee (
        "Bob" , "Lewis" , " 444-44-4444 " , 5000 , .04 , 300 );
    PieceWorker pieceworker(
        "Mike", "phoneix", "555-55-5555" , 100.6 , 50);
    HourlyEmployee hourlyemployee(
        "Tim", " dragon ", "666-66-6666" , 45,80);
    cout << " Employees processed individually using static binding : \n \n " ;

    salariedEmployee.print();
    cout << " \n earned $ " << salariedEmployee.earnings() << " \n\n";
    commissionEmployee.print();
    cout << " \n earned $ " << basePlusCommissionEmployee.earnings()
         <<"\n\n";

    vector < Employee *> employees (5) ;

    employees[0] = & salariedEmployee;
    employees[1] = & commissionEmployee;
    employees[2] = & basePlusCommissionEmployee;
    employees[3] = & pieceworker;
    employees[4] = & hourlyemployee;
    cout <<" Employees processed polymorphically via dynamic binding:\n\n ";

    cout <<"Virtual function calls made off base-class pointers:\n\n";

    for( const Employee *employeePtr : employees)
        virtualViaPointer(employeePtr);

    cout << "Virtual function calls made off base-class reference:\n\n";
    for(const Employee*employeePtr :employees)
        virtualViaReference(*employeePtr);
}

void virtualViaPointer(const Employee *const baseClassPtr)
{
    baseClassPtr->print();
    cout<<"\nearned $"<<baseClassPtr->earnings() <<"\n\n";
}

void virtualViaReference( const Employee&baseClassRef)
{
    baseClassRef.print();
    cout << "\nearned $"<<baseClassRef.earnings()<<"\n\n";
}
