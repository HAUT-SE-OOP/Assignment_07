
// Definition of Package class.
#ifndef PACKAGE_H
#define PACKAGE_H
using namespace std;
class Package
{
public:
   Package( const string &,const string &,const string &,const string &,const string &,double,double,double ); // constructor
  virtual double calculateCost( );
   void setConsignee(const string &);
   string getConsignee()const;
    void setShipper(const string &);
   string getShipper()const;
      void setSite(const string &);
   string getSite()const;
      void setPlace(const string &);
   string getPlace()const ;
    void setState(const string &);
   string getState()const;
      void setZipcode(double);
   double getZipcode();
      void setWeight(double);
   double getWeight();
      void setCost(double);
   double getCost();

private:
    string consignee;
    string shipper;
    string site;
    string place;
    string  state;
    double zipcode;
   double weight;
   double  cost;
}; // end class Package

#endif
