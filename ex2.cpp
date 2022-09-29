#include<iostream>
using namespace std;
class A
{
protected:
int x;
public:
void inputx()
{
 cout<<"enter x: ";
 cin>>x;	
}	

};
class B
{
	protected:
		int y;
		public:
			void inputy()
			{
				cout<<" y: ";
				cin>>y;
			}
	
};
class C: public A,public B
{
	protected:
		int z;
	public:
		int largest()
		{
			if(x>y)
			{
				z=x;
				
			}
			else 
			{
				z=y;
			}
			return z;
		}
};
class D:public C
{
	public:
		void checkd()
		{
			if(z%5==0)
			{
				cout<<"\n yes largest is multiple of 5,\n";
			}
			else
			{
					cout<<"\n no largest is not multiple of 5,\n";
			}
		}
};
class E:public C
{
	public:
		int fib(int a)
		{
	
			if(a==0 || a==1)
			{
			return a;
			}
			else
			{
			return (fib(a-1)+fib(a-2)); 
			}
};
int main()
{
	int i,n;
	E obje;
	D objd;
	objd.inputx();
	objd.inputy();
	n=objd.largest();
	objd.checkd();
	  while(i<=n)
	   {
	   	cout<<" "<<obje.fib(n);
	   i++;
	   }

}

