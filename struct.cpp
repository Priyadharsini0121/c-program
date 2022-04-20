#include<iostream>
using namespace std;
union part
{
int modelnumber;
int partnumber;
float cost;

};
int main()
{
    part p;
    p.modelnumber=6244;
    p.partnumber=373;
    p.cost=217.55;

    cout<<"Model:"<<p.modelnumber<<endl;
    cout<<"Part:"<<p.partnumber<<endl;
    cout<<"cost$:" <<p.cost<<endl;
    cout<<"Size of int:" <<sizeof(part)<<endl;
    return 0;

}
