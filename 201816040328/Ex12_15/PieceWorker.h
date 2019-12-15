#ifndef PIECEWORKER_H_INCLUDED
#define PIECEWORKER_H_INCLUDED
#include<string.h>
using namespace std;

#include"Employee.h"

class PieceWorker : public Employee
{
public:
    PieceWorker(const string &,const string &,const string &,double = 0.0,double = 0.0);
    //virtual ~PieceWorker(){};
    void setwage(double );
    double getwage();
    void setpiece(double );
    double getpiece();
    virtual double earnings() const override;
    virtual void print() const override;
private:
    double wage;
    double piece;
};


#endif // PIECEWORKER_H_INCLUDED
