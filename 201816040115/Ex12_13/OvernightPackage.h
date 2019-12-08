//OvernightPackage.h
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include"Package.h"

class OvernightPackage : public Package
{
public:
    //inherit constructor
    OvernightPackage(string senderNam,string senderAddres,string senderCit,string senderStat,string senderPostCod,string addresseeNam,string addresseeAddres,string addresseeCit,string addresseeStat,string addresseePostCod,double weigh,double unitPric,double extraCharg);
    virtual ~OvernightPackage() { }
    void setExtraCharge(double extraCharg);
    double getExtraCharge() const;
    virtual double calculateCost() override;
private:
    double extraCharge;

};
#endif // OVERNIGHTPACKAGE_H



