#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>

class Package
{
public:
    Package(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,
            const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double,double);//constructor function
    virtual ~Package(){}
    void setPackageWeight(double);
    double getPackageWeight()const;
    void setPerUnitCost(double);
    double getPerUnitCost()const;
    void setsenderFirstName(const std::string &);
    std::string getsenderFirstName()const;
    void setsenderLastName(const std::string &);
    std::string getsenderLastName()const;
    void setaddresseeFirstName(const std::string &);
    std::string getaddresseeFirstName()const;
    void setaddresseeLastName(const std::string &);
    std::string getaddresseeLastName()const;
    void setsenderAddress(const std::string &);
    std::string getsenderAddress()const;
    void setaddresseeAddress(const std::string &);
    std::string getaddresseeAddress()const;
    void setsenderCity(const std::string &);
    std::string getsenderCity()const;
    void setaddresseeCity(const std::string &);
    std::string getaddresseeCity()const;
    void setsenderState(const std::string &);
    std::string getsenderState()const;
     void setaddresseeState(const std::string &);
    std::string getaddresseeState()const;
     void setsenderPostalCode(const std::string &);
    std::string getsenderPostalCode()const;
    void setaddresseePostalCode(const std::string &);
    std::string getaddresseePostalCode()const;
    virtual double calculateCost()=0;//calculate freight
    virtual void printMessage()const;//print sender and addressee 's message
private:

        std::string senderFirstName;//sender name
        std::string senderLastName;//sender surname
        std::string addresseeFirstName;//addressee name
        std::string addresseeLastName;//addressee surname
        std::string senderAddress;//sender address
        std::string addresseeAddress;//addressee address
        std::string senderCity;//city of sender
        std::string addresseeCity;//city of addressee
        std::string senderState;//state of sender
        std::string addresseeState;//state of addressee
        std::string senderPostalCode;//sender postal code
        std::string addresseePostalCode;//addressee postal code
        double packageWeight;
        double perUnitCost;
};


#endif // PACKAGE_H_INCLUDED
