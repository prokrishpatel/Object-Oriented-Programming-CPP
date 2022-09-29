#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"\nEnter values for a,b and c: ";
	cin>>a>>b>>c;
	if(a>b&&a>c)
	cout<<"largest no is "<<a;
	if(b>a&&b>c)
	cout<<"largest no is "<<b;
	else
	cout<<"largest no is "<<c;
	return 0;
}
