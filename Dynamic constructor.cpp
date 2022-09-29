//Dynamic constructor-Example 2
#include<iostream>
using namespace std;
class Array
{
private:
int *arr;
int n;
public:
Array();
void show_data();
};
Array::Array()
{
cout<<"\nEnter size:";
cin>>n;
arr=new int[n];
int *d=arr;
cout<<"\n Enter the elements:";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n;i++)
{
   if(arr[i]%7==0)
   {
   	cout<<arr[i]<<" is multyple of 7\n";
   }
}
}

int main()
{
int no_object;
cout<<"\n Enter no. of objects:";
cin>>no_object;
Array *ptr=new Array[no_object];
return 0;
}





