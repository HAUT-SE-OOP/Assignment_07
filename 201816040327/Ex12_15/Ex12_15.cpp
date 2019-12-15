//
//  main.cpp
//  Ex12_15
//
//  Created by misonomayubw on 2019/12/15.
//  Copyright © 2019 misonomayubw. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include "Employee.hpp"
#include "SalariedEmployee.hpp"
#include "CommissionEmployee.hpp"
#include "BasePlusCommissionEmployee.hpp"
#include "PieceWorker.hpp"
#include "HourlyWorker.hpp"

using namespace std;

int main()
{
    vector<Employee *>employees(5);

    employees[0]=new SalariedEmployee( "John","Smith","111-11-11111",800); // //create Account object
    employees[1]=new CommissionEmployee("Sue","Jones","333-33-3333",10000,0.06);// //create SavingsAccount object
    employees[2]=new BasePlusCommissionEmployee("Bob","Lewis","444-44-444",5000,0.04,300);  //create CheckingAccount object
    employees[3]=new PieceWorker("Tom","Smith","555-55-555",50,6);//
    employees[4]=new HourlyWorker("Jerry","Smith","777-77-777",50,7);

    for(size_t i=0;i<employees.size();i++)
    {
        employees[i]->print();
        cout<<endl<<endl;
        delete employees[i];
    }

    return 0;
}
