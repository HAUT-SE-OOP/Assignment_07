#include<bits/stdc++.h>
#include"Package.h"
using namespace std;
package::package(string sen,string name,string adre,string sadres,string cit,string code,double wei,double money)
{
    sender=sen,Recipient=name,RecipientAddress=sadres,City=cit,Postcode=code,senderAddress=adre;
    Weight=wei;
    money>0?charge=money:charge=0;
}
double package::calculateCost()
{
    return Weight*charge;
}
void package::addcharge(double x)
{
    charge+=x;

}
string package::getmessage()
{
    return string(senderAddress+" to "+RecipientAddress);
}

