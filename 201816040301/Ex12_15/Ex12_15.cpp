#include <vector>
#include <iomanip>
#include"Employee.h"
#include"CommissionEmployee.h"
#include"SalariedEmployee.h"
#include"BasePlusCommissionEmployee.h"
#include"PieceWorker.h"
#include"HourlyEmployee.h"

using namespace std;

int main()
{

    cout << fixed << setprecision(2);//set floating-point output formatting

    SalariedEmployee salariedEmployee("John","Smith","111-11-1111",800);
    CommissionEmployee commissionEmployee("Sue","Jones","333-33-3333",10000,.06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob","Lewis","444-44-4444",5000,.04,300);
    PieceWorker pieceWorker("Kirito","Asuna","555-55-5555",22.6,5);
    HourlyEmployee hourlyEmployee("UGO","Eugeo","666-66-6666",12.4,14);

    vector < Employee*> employees(5);

    employees[0]=&salariedEmployee;
    employees[1]=&commissionEmployee;
    employees[2]=&basePlusCommissionEmployee;
    employees[3]=&pieceWorker;
    employees[4]=&hourlyEmployee;

    for(const Employee *employeePtr : employees)
        {
            employeePtr->print();
            cout<<"earned: "<<employeePtr->earnings()<<endl<<endl;
        }
}
