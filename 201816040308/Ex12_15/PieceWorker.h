
#include<string>
using namespace std;
#include "Employee.h"
class PieceWorker : public Employee
{
public:
    PieceWorker(string,string,string,double,double );
    void setwage(double);
    double getwage();
    void setpieces(double);
    double getpieces();
    double earnings();
    void print();
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double wage;
    double pieces;
};
