#include <iostream>
#include <vector>
#include <iomanip>
#include "HourlyEmployee.h"
#include "PieceWorker.h"
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "SalariedEmployee.h"
#include "Employee.h"


using namespace std;

int main()
{
    cout << fixed << setprecision( 2 );

    vector< Employee *>Employee( 5 );
    //set 5 pointers

    Employee[ 0 ] = new BasePlusCommissionEmployee( "Zhang","San", "123321",25 , 0.6, 800);
    Employee[ 1 ] = new CommissionEmployee( "Li", "Si", "456654", 25, 0.6);
    Employee[ 2 ] = new HourlyEmployee("Zhao", "Wu", "789987", 5, 80 );
    Employee[ 3 ] = new PieceWorker("Wang", "Mazi", "741147", 20, 5 );
    Employee[ 4 ] = new SalariedEmployee("Gou", "Dan", "852258", 20 );


    for(size_t i = 0; i < Employee.size() ; i++ )
    {
        Employee[i]->earnings();
        cout << "\n\n" << endl;
    }

    return 0;
}
