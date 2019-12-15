#ifndef EMPLOYEE_H2
#define EMPLOYEE_H2
#include <string>
#include "Employee.h"
using namespace std ;
class PieceWorker : public Employee//计件
{
public:
    PieceWorker (const string &, const string &, const string &, double =0.0, double =0.0 ) ;
    virtual ~ PieceWorker() {}
    virtual double earnings() const override ;
    virtual void print () const override  ;
    void setwage  (double) ;
    double getwage  ()const ;
    void setpieces (double) ;
    double getpieces () const ;

private :
    double wage ;//每件的花费
    double pieces ;//件数
};
#endif
