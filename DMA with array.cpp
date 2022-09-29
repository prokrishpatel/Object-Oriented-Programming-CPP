//WAP to allocate/deallocate memory for array of memory locations(integers)
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int size;
cout<<"\nEnter number of integer values to work with:";
cin>>size;
int *ptr=new int[size];
if(ptr==NULL)
{
cout<<"\n Memory allocation failure";
exit(1);
}
else
{
cout<<"Memory allocated successfully\n";
cout<<"\nEnter array values:";
for(int i=0;i<size;i++)
{
    cin>>*(ptr+i);
}
cout<<"\nEntered array elements are:";
for(int i=0;i<size;i++)
{
    cout<<"\n"<<*(ptr+i);
}
delete [] ptr;
cout<<"\nMemory deallocated successfully";
}
return 0;
}


