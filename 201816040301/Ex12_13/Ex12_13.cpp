#include "Package.h"
#include"OvernightPackage.h"
#include"TwoDayPackage.h"
#include <vector>

int main()
{
    /*cout<<endl;
    OvernightPackage a("Kirito","UGO","SAO","UW","RATH",123456,5,11,0.5);
    TwoDayPackage b("Kirito","UGO","SAO","UW","RATH",123456,6,11,10.5);*/
    cout<<setw(6)<<"寄件人"<<setw(10)<<"收件人"<<setw(10)<<"地址"<<setw(12)<<"城市"<<setw(5)
    <<"州"<<setw(12)<<"邮政编码"<<setw(5)<<"重量"<<setw(5)<<"单价"<<setw(5)<<"费用"<<setw(15)<<"方式"<<endl;
    /*a.display();
    b.display();
    cout<<endl;*/

    vector <Package *>packages(2);
    packages[0]=new OvernightPackage("Kirito","UGO","SAO","UW","RATH",123456,5,11,0.5);
    packages[1]=new TwoDayPackage ("Kirito","UGO","SAO","UW","RATH",123456,6,11,10.5);

    for(Package *packagePtr:packages)
    {
        packagePtr->display();
    }
}
