#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
class OvernightPackage:public Package
{
public:
    OvernightPackage(double,string,string,string,string,string,string,string,string,string,string,double,double);
    double calculateCost();
	double getextracost();
    void print();
private:
    double extracost;
};
