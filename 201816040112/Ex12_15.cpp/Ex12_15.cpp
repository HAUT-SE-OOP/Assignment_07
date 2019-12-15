#include <iostream>
#include "Empolyee.h"
#include "PieceWorker.h"
#include "HourlyWorker.h"
using namespace std;

int main()
{
    Employee *p;
    PieceWorker employee1("Kate","Cristy","100110",18,10);
    p=&employee1;
    p->print();
    HourlyWorke employee2("Robert","Tony","100988",41,10);
    p=&employee2;
    p->print();
    return 0;
}
