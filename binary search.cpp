//Binary search
#include<iostream>
using namespace std;
class example
{ 
int a[10],beg,last,mid,key;
public:
	void input()
	{   
		cout<<"Enter 10 elements one by one:\n";
		for(int i=0;i<10;i++)
		{
			cin>>a[i];
		}
		cout<<"Enter No You want to search Through Binary Search: ";
		cin>>key;
	}
	int binary()
	{  beg=0,last=9;
		int loc=-1;
		while(beg<=last)
		{
			mid=(beg+last)/2;
			if(a[mid]==key)
			{
				loc=mid;
				break;
			}
			else if(a[mid]>key)
			{
			     last=mid-1;
			}
			else if(a[mid]<key)
			{
			     beg=mid+1;	
			}
			
		}
		return loc;
	}
};
int main()
{
	example obj[3];
	int result;
	for(int i=0;i<3;i++)
	{
		obj[i].input();
		result=obj[i].binary();
		if(result==-1)
		{
			cout<<"Sorry!! Element not found ";
		}
		else
		{
			cout<<"Element found at loction "<<result+1<<" .\n"<<"With Index No. "<<result<<"\nThank you\n\n";
			
		}
	}
	return 0;
}
	
