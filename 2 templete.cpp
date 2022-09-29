#include<iostream>
#define MAX 5
using namespace std;
template<class Type>
void read(Type A[])
{
for(int i=0;i<MAX;i++)
{
	cout<<"enter array elements\n";
	cin>>A[i];
}
}
template<class Type>
Type large(Type A[])
{
	Type l=A[0];
for (int i=0;i<MAX;i++)
{
if(A[i]>l)
{
	l=A[i];
}	
}
return l;
}
int main()
{
int Array[MAX];
float Array1[MAX];
cout<<"\n Enter the integer array elements : ";
read<int>(Array);
cout<<"\n large of elements = "<<large<int>(Array);
cout<<"\n Enter the float array elements : ";
read<float>(Array1);
cout<<"\n large of elements = "<<large<float>(Array1);
}





