#include<iostream>
using namespace std;
int main()
{
int p,r,q;
 cout<<"enter principal,rate,and time period: ";
 cin>>p>>r;
 q=p;
p=r;
 r=q;
 cout<<"after swaping :"<<p<<" "<<r;
	return 0;
}
