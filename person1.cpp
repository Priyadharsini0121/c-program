#include<iostream>
using namespace std;
class person
{
char name[50];
int age;

public:
void getdetails()
{
cout<<"Enter the name:";
cin>>name;
cout<<"Enter the age:";
cin>>age;
}

void display()
{
cout<<"name:"<<name<<endl;
cout<<"age:"<<age<<endl;
}
};
int main()
{
person p[2];
for(int i=0;i<=2;i++)
{

p[i].getdetails();
p[i].display();

}
return 0;
}
