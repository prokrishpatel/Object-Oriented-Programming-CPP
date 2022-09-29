//Bubble short
#include<iostream>
using namespace std;
class example
{ 
int a[10];
public:
	void input()
	{   
		cout<<"Enter 10 elements one by one:\n";
		for(int i=0;i<10;i++)
		{
			cin>>a[i];
		}
    }
    int bubble()
    {
    	int i,j,swap;
    	
    	for(i=0;i<9;i++)//passes
	{
		for(j=0;j<9-i;j++)//comparison
		{
			if(a[j]>a[j+1])//for decreasing order use <
			{
				swap = a[j];
				a[j] = a[j+1];
				a[j+1]= swap;
			}
		}
	}
		printf("sorted list in asecding order \n");
	for(i=0;i<10;i++)
	printf("%d\t<\t",a[i]);
	}
};
int main()
{
	example obj[3];
	for(int k=0;k<3;k++)
	{
		cout<<"\n"<<k+1<<"\n";
		obj[k].input();
		obj[k].bubble();
		
	}
	return 0;
}
