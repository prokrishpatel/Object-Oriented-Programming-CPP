#include<iostream>
using namespace std;
int main()
{
int p,r;
 cout<<"enter principal,rate,and time period: ";
 cin>>p>>r;
 p=p+r;
 r=p-r;
 p=p-r;
 cout<<"after swaping :"<<p<<" "<<r;
	return 0;
}
