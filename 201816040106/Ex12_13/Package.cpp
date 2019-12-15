#include"Package.h"
#include<string>
#include<stdexcept>
#include<iostream>
using namespace std;
Package::Package(string s,string sa,string cn,string ca,string cc1,string cc2,string p,double w,double f):
    sender(s),senderAddress(sa),consigneeName(cn),consigneeAddress(ca),consigneeCity(cc1),consgineeCanton(cc2),postalcode(p){
    setWeight(w);
    setFee(f);
}
void Package::setConsigneeAddress(string ca){
    consigneeAddress=ca;
}
string Package::getConsigneeAddress(){
    return consigneeAddress;
}
void Package::setSenderAddress(string sa){
    senderAddress=sa;
}
string Package::getSenderAddress(){
    return senderAddress;
}
void Package::setWeight(double w){
    if(w<0) throw invalid_argument("weight must be positive");
    else weight=w;
}
double Package::getWeight(){
    return weight;
}
void Package::setFee(double f){
    if(f<0) throw invalid_argument("fee must be positive");
    else fee=f;
}
double Package::getFee(){
    return fee;
}
double Package::calculateCost(){
    return weight*fee;
}
