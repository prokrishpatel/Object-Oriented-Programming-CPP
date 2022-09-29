//static member function
#include<iostream>
using namespace std;
int area(int x,int y)
{
	int z;
	z=0.5*x*y;
	return z;
}
int main()
{
	int b,h;
	cout<<"\nenter values of l and b: ";
	cin>>b>>h;
	cout<<area(b,h);//call by value(a,b are actual arguments)defaults parameters passing technique//fn calling
	//cout<<"the vales of a and b:"<<b<<"&"<<;//the value of a and b are not change because of diff memory location
	return 0;
}



