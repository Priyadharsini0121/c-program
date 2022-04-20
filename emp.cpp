#include<iostream>
using namespace std;
class Employee
{
    public:
    float basicSalary;
    float greatestSalary;



};


int main()
{
    Employee e;
     float total,hra,da;

    cout<<"Basic salary of Employee:";
    cin>>e.basicSalary;
    cout<<"Greatest salary of Employee:";
    cin >>e.greatestSalary;

    total=e.basicSalary+e.greatestSalary;
    cout<<"total is:"<<total;
    hra=(total/100)*3;
    cout<<"\n\n";
    cout<<"hra is:"<<hra;
    da=(total/100)*21;
    cout<<"\nda is:"<<da;




return 0;
}
