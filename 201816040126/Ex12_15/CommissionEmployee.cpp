#include <iostream>
#include "CommissionEmployee.h"
#include "Employee.h"


using namespace std;

CommissionEmployee::CommissionEmployee( const string &first, const string &last,
                   const string &ssn , double sales, double rate )
        :Employee( first , last , ssn )
        {
            setGrossSales( sales );
            setCommissionRate( rate );
        }

void CommissionEmployee::setGrossSales( double sales )
{
    if( sales >= 0)
    GrossSales = sales;
    else
       throw invalid_argument("GrossSales should be greater than 0!") ;

}
//function to set sales

double CommissionEmployee::getGrossSales()
{
    return GrossSales;
}
//function to get sales

void CommissionEmployee::setCommissionRate( double rate )
{
    if( rate >= 0)
    Rate = rate;
    else
       throw invalid_argument("Rate should be greater than 0!") ;
}
//function to set rate

double CommissionEmployee::getCommissionRate()
{
    return Rate;
}
//function to get rate

double CommissionEmployee::getTotal()
{
    return getGrossSales() * getCommissionRate();
}

void CommissionEmployee::earnings()
{
    cout << "The commission worker's earning is: " << endl;
    cout << getGrossSales() * getCommissionRate() << endl;
}
//function to show earnings
