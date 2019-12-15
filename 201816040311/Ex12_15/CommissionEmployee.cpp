// Lab 2: CommissionEmployee.cpp
// Class CommissionEmployee member-function definitions.
#include <iostream>
using namespace std;

#include "CommissionEmployee.h" // CommissionEmployee class definition

// constructor                                                     
CommissionEmployee::CommissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate)
        :Employee(first,last,ssn)
{
   setGrossSales( sales ); // validate and store gross sales       
   setCommissionRate( rate ); // validate and store commission rate
} // end CommissionEmployee constructor                            

// set social security number

// set gross sales amount
void CommissionEmployee::setGrossSales( double sales )
{
    if(sales>=0.0)
        grossSales=sales;
    else
        throw invalid_argument("Gross Sales must be >=0.0");
} // end function setGrossSales

// return gross sales amount
double CommissionEmployee::getGrossSales() const
{
   return grossSales;
} // end function getGrossSales

// set commission rate
void CommissionEmployee::setCommissionRate( double rate )
{
    if(rate>0.0&&rate<1.0)
        commissionRate=rate;
    else
        throw invalid_argument("commission rate must be >=0.0 and <1.0");
} // end function setCommissionRate

// return commission rate
double CommissionEmployee::getCommissionRate() const
{
   return commissionRate;
} // end function getCommissionRate

// calculate earnings                      
double CommissionEmployee::earnings() const
{                                          
   return commissionRate * grossSales;     
} // end function earnings                 

// print CommissionEmployee object                                
void CommissionEmployee::print() const                            
{                                                                 
   cout << "commission employee: " ;
    Employee::print();

     cout<< "\ngross sales: " << getGrossSales();
     cout<< "\ncommission rate: " << getCommissionRate();
} // end function print                                           


/**************************************************************************
 * (C) Copyright 1992-2012 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
