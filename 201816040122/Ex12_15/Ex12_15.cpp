#include<iostream>
#include<iomanip>
#include<vector>
#include"Employee.h"
#include"SalariedEmployee.h"
#include"CommissionEmployee.h"
#include"BasePlusCommissionEmployee.h"
#include"PieceWorker.h"
#include"HourlyEmployee.h"
using namespace std;
int main()
{
    //set floating-point output formatting
    cout << fixed << setprecision(2);

    //create derived-class objects
    SalariedEmployee salariedEmployee("Wang","Jun","111-11-1111",800);
    CommissionEmployee commissionEmployee("Jiang","Feng","222-22-2222",10000,.06);
    BasePlusCommissionEmployee basePlusCommissionEmployee("Tom","Simth","333-33-3333",5000,.04,300);
    PieceWorker pieceWorker("LI","YIfeng","444-44-4444",20,5);
    HourlyEmployee hourlyEmployee("Hu","GE","555-55-5555",10,50);

    //create vector of five base-class pointer
    vector < Employee * > EPtr(5);

    //initialize vector with pointers to Employees
    EPtr[0]= &salariedEmployee;
    EPtr[1]= &commissionEmployee;
    EPtr[2]= &basePlusCommissionEmployee;
    EPtr[3]= &pieceWorker;
    EPtr[4]= &hourlyEmployee;

for( size_t i=0; i<EPtr.size(); i++)

    {
        EPtr[i]->print();
        cout<<endl;

    }
 return 0;
}

