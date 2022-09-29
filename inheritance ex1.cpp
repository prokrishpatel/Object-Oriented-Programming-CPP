#include<iostream>
using namespace std;
class A
{
	protected:
		int x;
		public:
			void getdataA()
			{
				cout<<"Enter the value of X : ";
				cin>>x;
			}
};
class B : public A
{
	protected:
		int y,z;
		public:
			void getdataB()
			{
				cout<<"Enter the value of Y : ";
				cin>>y;
			}
			void sum()
			{
				z=x+y;
				cout<<"sum of x and y: ";
				cout<<z<<endl;
			}
			
};
class C : public B
{
	public:
		void check()
		{
			if(z%2==0)
			{
				cout<<z<<" is even";
			}
			else 
			{
				cout<<z<<" is odd";
			}
		}
};
int main()
{
	C obj;
	obj.getdataA();
	obj.getdataB();
	obj.sum();
	obj.check();
}
