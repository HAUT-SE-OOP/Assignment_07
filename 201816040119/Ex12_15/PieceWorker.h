#include<string>
#include"Employee.h"
class PieceWorker:public Employee
{
public:
    PieceWorker(const std::string &,const std::string &,const std::string &,double=0.0,double=0.0);
    virtual ~PieceWorker(){};
    void setWage(double);
    double getWage()const;
    void setPieces(double);
    double getPieces()const;
    virtual double earning()const ;
    virtual void print()const ;
private:
   double wage;
   double pieces;
};
