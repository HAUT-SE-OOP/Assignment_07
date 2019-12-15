#include <iostream>
#include <iomanip>
#include <vector>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"

using namespace std;

int main()
{
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
     double average;
     double twofee;
     double calculatecosts=0;
     cout<<"sender: ";
     cin>>sender;
     cout<<"receiver: ";
     cin>>receiver;
     cout<<"senderplace: ";
     cin>>senderplace;
     cout<<"sendercity: ";
     cin>>sendercity;
     cout<<"senderstate: ";
     cin>>senderstate;
     cout<<"senderbianma: ";
     cin>>senderbianma;

     cout<<"receiverplace: ";
     cin>>receiverplace;
     cout<<"receivercity: ";
     cin>>receivercity;
     cout<<"receiverstate: ";
     cin>>receiverstate;
     cout<<"receiverbianma: ";
     cin>>receiverbianma;

     cout<<"weight: ";
     cin>>weight;
     cout<<"fee: ";
     cin>>fee;
     cout<<"average: ";
     cin>>average;
     cout<<"twofee: ";
     cin>>twofee;
     Package PACKAGE(sender,receiver,senderplace,sendercity,senderstate,senderbianma,
                     receiverplace,receivercity,receiverstate,receiverbianma,weight,fee);
     TwoDayPackage TWODAYPACKAGE(sender,receiver,senderplace,sendercity,senderstate,senderbianma,
                    receiverplace,receivercity,receiverstate,receiverbianma,weight,fee,average);
     OvernightPackage OVERNIGHTPACKAGE(sender,receiver,senderplace,sendercity,senderstate,senderbianma,
                                       receiverplace,receivercity,receiverstate,receiverbianma,,weight,fee,twofee);
     vector<Package *>packages[2];
     // create vector of three base-class pointers
     packages[0]= &TWODAYPACKAGE;
     packages[1]= &OVERNIGHTPACKAGE;
     for(size_t i=0;i<2;i++)
     {
         packages[i]->getsenderplace();
         packages[i]->getreceiverplace();
         cout<<"calculateost: "<<packages[i]->calculateCost<<endl;
         calculatecosts+=packages[i]->calculateCost
     }
     cout<<"calculateCosts "<<calculatecosts;
     return 0;
}
