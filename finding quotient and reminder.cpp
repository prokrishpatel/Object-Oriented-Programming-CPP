#include<iostream>
using namespace std;
int main()
{
	int a,b,q,r;
	cout<<"enter the number to be divided: \n";
	cin>>a;
	cout<<"enter the number by which "<<a<<" should be divided: ";
	cin>>b;
	q=(a/b);
	r=(a%b);
	cout<<" quotient is: "<<q<<" and reminder is: "<<r;
	
}
