#include<iostream>

using namespace std;
class Rectangle
{
int length,breadth;

public Rectangle()
{
length=0;
breadth=0;
}
public Rectangle(int x,int y)
{
length=x;
breadth=y;
}
public Rectangle(int side)
{
    length=breadth=side;
}

void area()
{
cout<<length*breadth<<endl;
}

};
int main()
{
    Rectangle r;
Rectangle r1;

Rectangle r2(7,4);

Rectangle r3(10);

r1=r.length*r.breadth;

cout<<"Area:"<<r1<<endl;
cout<<r2<<endl;
cout<<r3<<endl;
return 0;
}
