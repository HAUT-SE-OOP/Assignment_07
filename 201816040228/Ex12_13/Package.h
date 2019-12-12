//Package class.
#include <string>
#ifndef PACKAGE_H
#define PACKAGE_H
using namespace std;

class Package
{
public:
   Package( string , string, string, string, string, string, string,  string, string, string , double = 0.0, double = 0.0);//定义成员函数并初始化
   void setSenderName( string  );
   string getSenderName() const;

   void setRecipientName( string  );
   string getRecipientName() const;

   void setSenderAddressees( string  );
   string getSenderAddressees() const;

   void setRecipientAddressees( string  );
   string getRecipientAddressees() const;

   void setSenderCity( string  );
   string getSenderCity() const;

   void setRecipientCity( string  );
   string getRecipientCity() const;

   void setSenderState( string  );
   string getSenderState() const;

   void setRecipientState( string  );
   string getRecipientState() const;

   void setSenderPostalcode( string  );
   string getSenderPostalcode() const;

   void setRecipientPostalcode( string  );
   string getRecipientPostalcode() const;

   void setWeight( double );
   double getWeight() const;

   void setFee( double );
   double getFee() const;

   virtual double calculateCost();
   virtual void print();

private:
   string senderName;//寄件人姓名
   string recipientName;//收件人姓名
   string senderaddressees;//收货地址
   string recipientaddressees;
   string sendercity;//城市
   string recipientcity;
   string senderstate;//州
   string recipientstate;
   string senderpostalcode;//邮政编码
   string recipientpostalcode;//
   double weight;//包裹重量
   double fee;//每盎司费用
}; // end class Package

#endif
