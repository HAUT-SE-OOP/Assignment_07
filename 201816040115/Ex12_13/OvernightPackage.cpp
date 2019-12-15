//OvernightPackage.cpp

#include"OvernightPackage.h"

OvernightPackage::OvernightPackage(string senderNam,string senderAddres,string senderCit,string senderStat,string senderPostCod,string addresseeNam,string addresseeAddres,string addresseeCit,string addresseeStat,string addresseePostCod,double weigh,double unitPric,double extraCharg)
    :Package(senderNam,senderAddres,senderCit,senderStat,senderPostCod,addresseeNam,addresseeAddres,addresseeCit,addresseeStat,addresseePostCod,weigh,unitPric)
{
    setExtraCharge(extraCharg);
}

void OvernightPackage::setExtraCharge(double extraCharg)
{
    if(extraCharg>0)
    {
        extraCharge=extraCharg;
    }
    else
    {
        throw invalid_argument("extraCharge 's value is error");
    }
}

double OvernightPackage::getExtraCharge() const
{
    return extraCharge;
}

double OvernightPackage::calculateCost()
{
    return  (getUnitPrice()+getExtraCharge())*getWeight();
}

