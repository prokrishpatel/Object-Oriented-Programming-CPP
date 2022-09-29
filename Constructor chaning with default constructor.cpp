#include<iostream>
using namespace std;
class A
{
int x,y;
public:
A()
{

cout<<"\nCalling base class constructor: A";
}
~A()
{
cout<<"\nCalling base class destructor";
}
};
class B:public A
{

public:
B()
{
cout<<"\nCalling derived class B constructor: B";
}
~B()
{
cout<<"\nCalling derived B class destructor";
}
};
class C:public B
{
int n,m;
public:
C()
{

cout<<"\nCalling derived class C constructor with values: C";
}
~C()
{
cout<<"\nCalling derived class C destructor";
}
};
int main()
{
C obj1;
return 0;
}



