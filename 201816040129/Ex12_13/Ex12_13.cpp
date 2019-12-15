#include <iostream>
#include<string>
#include<vector>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"

using namespace std;

int main()
{
        vector<Package*>packages(2);
        packages[0]=new TwoDayPackage("张三","河南省郑州市高新区","李四","河南省郑州市中原区",3,1,2);
        packages[1]=new OvernightPackage("小明","河南省郑州市二七区","梨花","河南省郑州市黄河区",3,2,2);
        cout<<"寄件人信息："<<"张三"<<" "<<"河南省郑州市高新区"<<" "<<"收件人信息: "<<"李四"<<" "<<"河南省郑州市中原区"<<" "<<"包裹重量："<<3<<" "<<"每盎司价格："<<1<<" "<<"额外费用："<<2<<endl;
        cout<<"发送者地址："<<packages[0]->getjiaddress()<<endl;
        cout<<"接收者地址："<<packages[0]->getshouaddress()<<endl;
        cout<<"总费用为："<<" ";
        TwoDayPackage *twodayPackagePtr = dynamic_cast <TwoDayPackage*>(packages[0]);
        cout<<twodayPackagePtr->CalculateCost()<<endl;
        cout<<"寄件人信息："<<"小明"<<" "<<"河南省郑州市二七区"<<" "<<"收件人信息: "<<"梨花"<<" "<<"河南省郑州市黄河区"<<" "<<"包裹重量："<<3<<" "<<"每盎司价格："<<2<<" "<<"额外费用："<<2<<endl;
        cout<<"发送者地址："<<packages[1]->getjiaddress()<<endl;
        cout<<"接收者地址："<<packages[1]->getshouaddress()<<endl;
        cout<<"总费用为："<<" ";
        OvernightPackage *overnightPackagePtr = dynamic_cast <OvernightPackage*>(packages[1]);
        cout<<overnightPackagePtr->CalculateCost();
}
