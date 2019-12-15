#ifndef Package_H
#define Package_H
#include <string>
using namespace std ;
class Package
{
public:
    Package (const string &, const string &,const string &, const string &, const string &,const string &,const string &,const string &,const string &,double=0.0 ,double=0.0  ) ;
    void setWeight (double ) ;
    virtual ~Package () {}
    void setRate (double) ;
    double getweight () ;
    double getrate () ;
    string getrname () ;
    string getsname() ;
    virtual string gets_address () ;
    virtual string gets_city () ;
    virtual string gets_state () ;
    virtual string getr_address () ;
    virtual string getr_city () ;
    virtual string getr_state () ;
    string getpos () ;
    virtual double calculate_Cost() ;
    virtual void print() =0 ;
private:
    string sender_name ;
    string Recipient_name ;
    string s_address ;//含s的都是与发送者有关的
    string s_city ;
    string s_state ;
    string Postal_Code ;
    string r_address ;//以r开头的都是与接收者有关的
    string r_city ;
    string r_state ;
    double weight ;
    double rate  ;
};
#endif // Package_H
