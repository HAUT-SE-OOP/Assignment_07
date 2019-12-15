#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <iostream>
class Package
{

public:
    Package(std::string ,std::string ,std::string ,std::string ,std::string ,std::string ,std::string ,std::string ,std::string ,double ,double );//constructor with seven parameter
    virtual~Package();//destructor
    virtual double calculateCost()const;// the function is to calculate the cost
    void setSender(std::string);
    void setAddress(std::string);
    void setCity(std::string);
    void setState(std::string);
    void setWeight(double);
    void setOunceFee(double);
    void setReceiver(std::string);
    void setReceiverAddress(std::string);
    void setReceiverCity(std::string);
    void setReceiverState(std::string);
    void setReceiverCode(std::string);
    std::string getReceiver()const;
    std::string getSender()const;
    std::string getAddress()const;
    std::string getCity()const;
    std::string getState()const;
    std::string getReceiverAddress()const;
    std::string getReceiverCity()const;
    std::string getReceiverState()const;
    std::string getReceiverCode()const;
    double getWeight()const;
    double getOunceFee()const;
    void print()const;
private:
    std::string sender;
    std::string address;
    std::string city;
    std::string state;
    std::string receiver;
    std::string receiverAddress;
    std::string receiverCity;
    std::string receiverState;
    std::string receiverCode;
    double weight;
    double ounceFee;
};


#endif // PACKAGE_H_INCLUDED
