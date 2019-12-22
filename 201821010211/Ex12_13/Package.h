#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include<string.h>
using namespace std;

class Package
{
    public:
        Package(const string &,const string &, double,double);
        void setAddress1(const string &);
        string getAddress1()const;
        void setAddress2(const string &);
        string getAddress2()const;
        void setWeight(double );
        double getWeight()const;
        void setOneshot(double );
        double getOneshot()const;
        virtual double calculateCost() ;//const override;
        virtual void print() ;//const override;
    private:
        string address1;
        string address2;
        double oneshot;
        double weight;

};
