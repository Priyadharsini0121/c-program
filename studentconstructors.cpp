#include<iostream>
#include<string>
using namespace std;
class Student
{
string name;
public:
Student(string s)
{
name=s;
}
Student()
{
name="unknown";
}
void printName()
{
cout<<name<<endl;
}
};
int main()
{
Student s1("priya");
Student s2;
s1.printName();
s2.printName();
return 0;

}
