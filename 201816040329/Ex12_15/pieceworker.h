#ifndef PICEWORKER_H_INCLUDED
#define PICEWORKER_H_INCLUDED

#include"Employee.h"
using namespace std;

class pieceworker:public Employee
{
 public:
     pieceworker(const std::string &,const std::string &,const std::string &,double=0.0,double=0.0);

        void setwage(double);
        double getwage();

        void setmoney(double);
        double getmoney();

        virtual void print();
        virtual double earings()const;

 private:
    double wage;
    double money;
};


#endif // PICEWORKER_H_INCLUDED
