//WAP to allocate/deallocate memory for array of memory locations(integer)--Largest and Smallest
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int size,max,min;
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
min=*ptr;
max=*ptr;
for(int i=1;i<size;i++)
{
if(*(ptr+i)>max)
{
    max=*(ptr+i);
}
else if(*(ptr+i)<min)
{
    min=*(ptr+i);
}
}
cout<<"\nLargest element is:"<<max;
cout<<"\nSmallest element is:"<<min;
delete [] ptr;
cout<<"\nMemory deallocated successfully";
}
return 0;
}


