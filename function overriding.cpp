//Function overriding
#include<iostream>
using namespace std;
class A
{
public:
void show()
{
cout<<"\nIn Base Class A";
}
};
class B:public A
{
public:
void show()
{
cout<<"\nIn Derived Class B";
}
};
int main()
{
B obj1;
obj1.show();//By default derived class show() will be called
//obj1.A::show();//Here we are calling base class show()
return 0;
}



