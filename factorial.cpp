#include<iostream>
using namespace std;
int main()
{
   int a,f=1,i;
   cout<<"enter any number: ";
   cin>>a;
   if(a<0)
   cout<<"factorial does not.try again";
   else
   {
   	for(i=1;i<=a;i++)
   {
   	f*= i;
   }
   cout<<"factorial is "<<f;
   }
   
	return 0;
