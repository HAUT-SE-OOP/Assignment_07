#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include <iostream>
using namespace std;

class Package
{
public:
     Package(const string , const string , const string , const string , const string ,
              const string , const string, const string, const string,const string, const double , const double );
     void setsender(string );
     string getsender( );

     void setreceiver(string );
     string getreceiver( );

     void setsenderplace(string);
     string getsenderplace( );
     void setreceiverplace(string);
     string getreceiverplace( );

     void setsendercity(string );
     string getsendercity( );
     void setreceivercity(string );
     string getreceivercity( );

     void setsenderstate(string );
     string getsenderstate( );
     void setreceiverstate(string );
     string getreceiverstate( );

     void setsenderbianma(string);
     string getsenderbianma( );
     void setreceiverbianma(string);
     string getreceiverbianma( );

     void setweight(double);
     double getweight();
     void setfee(double);
     double getfee( );

     double calculateCost(double, double);
     void print();
private:
     string sender;
     string receiver;

     string senderplace;
     string sendercity;
     string senderstate;
     string senderbianma;

     string receiverplace;
     string receivercity;
     string receiverstate;
     string receiverbianma;
     double weight;
     double fee;
};

#endif // PACKAGE_H_INCLUDED
