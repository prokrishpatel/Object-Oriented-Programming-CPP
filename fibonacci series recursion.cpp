#include<iostream>
using namespace std;
class recursion
{
	int x;
	public:
		int input()
		{
			cout<<"enter any number: ";
			cin>>x;
			return x;
		}
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
		}
		
};
int main()
{
	recursion obj;
		int n=obj.input();
	   int i=0;
	   while(i<=n)
	   {
	   	cout<<" "<<obj.fib(i);
	   i++;
	   }

}
