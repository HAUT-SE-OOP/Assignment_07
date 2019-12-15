
#include <string>
#include "Package.h"
using namespace std;

class OvernightPackage : public Package
{
public:
    OvernightPackage(string,string,string,string,string,string,double=0,double=0,double=0);
    virtual double calculateCost();
    void setevOFee(double);
    double getevOFee();
    virtual void print();
private:
    double evOFee;
};
