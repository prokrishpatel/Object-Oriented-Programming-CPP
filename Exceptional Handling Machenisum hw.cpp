#include<iostream>
using namespace std;
void example(int x, int y)
{
cout<<"\n We are inside the function";
int z=x+y;
if((z%7)==0)
{
throw (x);
}
}
int main()
{
try
{
cout<<"\n We are inside the try block";
int p,q;
cout<<"enter x and y: ";
cin>>p>>q;
example(y);
}
catch(int i)
{
cout<<"\n Caught the exception:"<<i;
}
return 0;
}




