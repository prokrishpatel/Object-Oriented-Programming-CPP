#include<iostream>
using namespace std;
int main()
{
	int i,sum=0,a;
	for(i=1;i<=100;i++)
	{
		a=i%2;
		if(a==0)
		{
			sum=sum+i;
		}
		else
		{
			continue;
		}
	}
	cout<<"sum of the even no from 1 to 100 is :"<<sum;
}
