#include <iostream>
#include <stdexcept>
#include "commissionEmployee.h"
 using namespace std;

CommissionEmployee::ComisstonEmployee( const string &first,const string &last, const string &ssn, double sales, doub1e rate ): Employee( first, last, ssn)
{
    setGrosssales( sales );
    setCommissionRate( rate );


void CommissionEmployee::setGrossSales( double sales )
{
    if ( sales >= 0.0 )
        grossSales=sales;
    else
        throw invalid_argument( "Gross sales must be >= 0.0”);
}

double CommissionEmployee::getGrossSales()const
{
    return grossSales;
}

void CommissionEmployee::setCommissionRate( double rate )
{
    if(rate>0.0&&rate<1.0)
        commissionRate = rate;
    else
        throw invalid_argument( "Commission rate must be > 0.0 and < 1.0 ");
}
// return commission. rate
double CommissionEmployee::getCommissionRate()const
{
    return commissionRate;
}

double CommissionEmployee::earnings()const
{
    cout<<"commission employee:";
    Employee::print();
    cout<<"/ngross sales:"<<getGrossSales()<<":commission rate:"<<getCommissionRate();
}

