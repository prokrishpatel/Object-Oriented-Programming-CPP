#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
	public:
	A(int a)
	{
		x=a;
		cout<<"Constructor 	A"<<x<<endl;
	}
	~A()
	{
		cout<<"Distructor A\n";
	}
};
class B:public A
{
	protected:
		int y;
	public:
	B(int b ,int p):A(p)
	{
		y=b;
		if(x>y)
		{
			cout<<"\nx>y"<<endl;
		}
		else
		{
			cout<<"\ny>x"<<endl;
		}
	}
	~B()
	{
		cout<<"distructor B\n";
	}
};
class C:public A
{
	protected:
		int z; 
	public:
	C(int c,int d):A(d)
	{
		z=c;
	   if(x>z)
	   {
	   	cout<<"x>z"<<endl;
	   }
	   else
	   {
	   	cout<<"z>x"<<endl;
	   }
	}
	~C()
	{
		cout<<"Distructor C\n"	;
   }
};
int main()
{
	B objb(12,15);
	C objc(13,16);
}
