#include<iostream>
using namespace std;
class A
{
	public:
	A()
	{
		cout<<"Constructor 	A\n";
	}
	~A()
	{
		cout<<"Distructor A\n";
	}
};
class B:public A
{
	public:
	B()
	{
		cout<<"constructor B\n";
	}
	~B()
	{
		cout<<"distructor B\n";
	}
};
class C:public A
{
	public:
	C()
	{
		cout<<"constructor C\n";
	}
	~C()
	{
		cout<<"Distructor C\n"	;
   }
};
int main()
{
	B objb;
	C objc;
}
