#ifndef PIECE_H
#define PIECE_H
#include<bits/stdc++.h>
#include"Employee.h"
using namespace std;
class PieceWorker:public Employee
{
public:
    PieceWorker(string ,string ,string ,double =0,double =0);
    void setpieces(double);
    double getpieces()const;
    void setwage(double );
    double getwage()const;
   virtual double earnings()const override;
   virtual void print()const override;
      private:
        double wage;
     double pieces;

};
#endif // PIECE_H
