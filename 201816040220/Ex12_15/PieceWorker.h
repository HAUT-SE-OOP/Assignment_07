#include <string>
#include "Employee.h"
using namespace std;

class PieceWorker: public Employee
{
public:
    PieceWorker(string,string,string,double = 0.0,int =0);
    virtual ~ PieceWorker() {}

    void setSalary(double);
    double getSalary() const;

    void setPiece(int);
    int getPiece() const;

    virtual double earnings();
    virtual void print();
private:
    double wage;
    int pieces;
};
