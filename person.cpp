#include<iostream>
using namespace std;
class person
{
char name[30];
int age;
int rollno;
char dept[10];

public:
void getdata(void);
void display(void);
};
void person :: getdata(void)
{
cout<<"Enter name:";
cin>>name;
cout<<"Enter age:";
cin >>age;
cout<<"enter rollno:";
cin>>rollno;
cout<<"Enter dept:";
cin>>dept;
}
void person :: display(void)
{
cout<<"\nName:"<<name;
cout<<"\nAge:"<<age;
cout<<"\nRollno"<<rollno;
cout<<"\nDepartment"<<dept;
}
int main()
{
person p;
p.getdata();
p.display();
return 0;
}
