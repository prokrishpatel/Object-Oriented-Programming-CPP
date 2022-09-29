#include<iostream>
using namespace std;
int main()
{
	int a,p,c,i,d;
	cout<<"enter a number: ";
	cin>>a;
	for(i=2;i<a;i++)
	{
	d=a%i;
	if(d==0)
	{
		cout<<"no is composite";
        break;
	}
	else if(d=!0)
	{
		cout<<"no is prime";
		break;
	}
	}

	return 0;
}
