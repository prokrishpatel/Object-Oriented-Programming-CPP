#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"enter two number:\n";
	cin>>a>>b;
	cout<<"for add. press 1\nfor sub. press2\nfor multiplication press 3\nand for division press4"\n;
	cin>>c;
	switch (c)
{
case 1:
	d=a+b;
	cout<<"ans is "<<d;
	break;
case 2:
	d=a-b;
	cout<<"ans is "<<d;
	break;
case 3:
	d=a*b;
	cout<<"ans is "<<d;
	break;
case 4:
	d=a/b;
	cout<<"ans is "<<d;
	break;
}
	return 0;
}
