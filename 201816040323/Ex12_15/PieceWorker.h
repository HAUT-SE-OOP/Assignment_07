#ifndef PIECEWORKER
#define PIECEWORKER
#include <string>
using namespace std;
#include "Employee.h"

class PieceWorker : public Employee
{
public:
    PieceWorker(const string &, const string &,const string &,double =0.0,double = 0.0);
    virtual ~PieceWorker() {}// C++ standard string class

    void setWage(double);// set wage amount
    double getWage()const;// return wage amount

    void setPieces(double);// set piece
    double getPieces()const;// return piece

    virtual double earnings() const override;// calculate earnings
    virtual void print() const override;// print PieceWorker object
private:
    double wage;
    double pieces;
};

#endif // pIECEWORKER
