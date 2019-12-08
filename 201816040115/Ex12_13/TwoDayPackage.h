//TwoDayPackage.h
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include"Package.h"

class TwoDayPackage : public Package
{
public:
    //inherit constructor
    TwoDayPackage(string senderNam,string senderAddres,string senderCit,string senderStat,string senderPostCod,string addresseeNam,string addresseeAddres,string addresseeCit,string addresseeStat,string addresseePostCod,double weigh,double unitPric,double postAg);
    virtual ~TwoDayPackage() { }
    virtual double calculateCost() override;   // calculate cost
    void setPostAge(double postAg);
    double getPostAge() const;
private:
    double postAge;
};
#endif // TWODAYPACKAGE_H




