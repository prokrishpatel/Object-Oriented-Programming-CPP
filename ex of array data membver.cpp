#include<iostream>
using namespace std;
class student
{
int a[5];
public:
void input()
    {
        cout<<"\nEnter array elements:";
        for(int i=0;i<5;i++;)
        cin>>a[i];
    }
    int average()
    {
        int result=0;
        float avg;
        for(int i=0;i<5;i++)
        {
            result=result+a[i];
        }
        avg=(result/5);
        return avg;
    }
};
int main()
{
	int max, no=0;
	student obj[3];
	for(int i=0;i<3;i++)
	{
		obj[i].input();
		obj[i].average();
	}
  max=obj[0].average();
	for(int i=0;i<3;i++)
	{
		if(obj[i].average()>max);
		{
		
		max=obj[i].average();
		no=i;
		}
	
	}
	cout<<"max is : ";
	cout<<max;
	cout<<no;
	
}
