
#include<string>
using namespace std;
#include "Employee.h"
class PieceWorker : public Employee
{
public:
    PieceWorker(string,string,string,double,double );

    double earnings();
    void print();

    void setWage(double);
    double getWage()const;

    void setPieces(double);
    double getPieces()const;

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
    double wage;
    double piece;
};
