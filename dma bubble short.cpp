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
}
    int i,j,swap;
    	
    	for(i=0;i<size;i++)//passes
	{
		for(j=0;j<size-i;j++)//comparison
		{
			if((*(ptr+j))>(*(ptr+j+1)))//for decreasing order use <
			{
				swap = *(ptr+j);
			*(ptr+j) = *(ptr+j+1);
				*(ptr+j+1)= swap;
			}
		}
	}
	cout<<"sorted list in asecding order \n";
	for(i=0;i<size;i++){
	
	cout<<"\t<\t"<<*(ptr+i);
}
}

