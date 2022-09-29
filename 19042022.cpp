#include<iostream>
using  namespace std;
int main()
{
	int x,y,l;
	float f=0.0f;
	cout<<"enter x and y : ";
	cin>>x>>y;
	if(x>y){
		l=x;
	}
	else
	{
		l=y;
	}
	if(l%2==0)
	{
		throw f;
	}
	catch(float z)
	{
		cout<<"exception is thrown "<<z;
	}
}
