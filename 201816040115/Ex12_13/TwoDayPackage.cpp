//TwoDayPackage.cpp

#include"TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(string senderNam,string senderAddres,string senderCit,string senderStat,string senderPostCod,string addresseeNam,string addresseeAddres,string addresseeCit,string addresseeStat,string addresseePostCod,double weigh,double unitPric,double postAg)
    :Package(senderNam,senderAddres,senderCit,senderStat,senderPostCod,addresseeNam,addresseeAddres,addresseeCit,addresseeStat,addresseePostCod,weigh,unitPric)
{
    setPostAge(postAg);
}
void TwoDayPackage::setPostAge(double postAg)
{
    if(postAg>0)
    {
        postAge=postAg;
    }
    else
    {
        throw invalid_argument("postAge's value is error");
    }
}

double TwoDayPackage::getPostAge() const
{
    return postAge;
}
double TwoDayPackage::calculateCost() //borrow base class's function calculate()
{
    return getPostAge()+getWeight()*getUnitPrice();
}

