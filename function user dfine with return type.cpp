#include<iostream>
using namespace std;
int large(int,int,int);//fn declaration
int main()
{
	int a,b,c;
	cout<<"enter any three number: \n";
	cin>>a>>b>>c;
	cout<<large(a,b,c)<<" is largest";
	return 0;
}
int large(int x,int y, int z)
{
	if(x>y&&x>z)
	{
	return x;
	}
	else if(y>x&&y>z)
	{
	return y;
	}
	else
	{
	return z;
	}
}
