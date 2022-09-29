//Pointer as a data member of class
#include<iostream>
using namespace std;
class Array
{
int *arr;
int size;
public:
void get_data(int n)
{
size=n;
arr=new int[size];
cout<<"\nEnter elements:";
for(int i=0;i<size;i++)
{
cin>>*(arr+i);
}
}
void large()
{
int max=*arr;
for(int i=0;i<size;i++)
{
if(*(arr+i)>max)
{
	max=*(arr+i);
}
}
cout<<"\n largest of elements="<<max;
delete []arr;//Memory deallocation
cout<<"\nMemory deallocated";
}
};
int main()
{
Array a;
int n;
cout<<"\n Enter the number of elements:"<<endl;
cin>>n;
a.get_data(n);
a.large();
return 0;
}

