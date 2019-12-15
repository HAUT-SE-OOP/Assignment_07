#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
class Package
{
public:
   Package( const string &, const string &, const string &,const string &, const string &, const string &,const string &, const string &,const string &,
      double = 0.0, double = 0.0);
    void setRecipientName( const string & ); // set recipient's name
   string getRecipientName() const; // return recipient's name

   void setReAddress( const string &);
   string getReAddress() const;

   void setReCity( const string &);
   string getReCity() const;

   void setReState(const string &);
   string getReState() const;

   void setSenderName( const string & ); // set sender's name
   string getSenderName() const; // return sender's name

   void setSeAddress( const string &);
   string getSeAddress() const;

   void setSeCity( const string &);
   string getSeCity() const;

   void setSeState(const string &);
   string getSeState() const;

   void setPostalCode( const string & ); // set postal code
   string getPostalCode() const; // return postal code

   void setWeight( double ); // set weight
   double getWeight() const; // return weight

   void setUnitPrice( double );
   double getUnitPrice() const;
   virtual double calculateCost() const; // calculate cost
   virtual double print() const; // print package object
private:
   string recipientName;
   string reAddress;
   string reCity;
   string reState;
   string senderName;
   string seAddress;
   string seCity;
   string seState;
   string postalCode;
   double weight;
   double unitPrice;
}; // end class Package



#endif // PACKAGE_H_INCLUDED
