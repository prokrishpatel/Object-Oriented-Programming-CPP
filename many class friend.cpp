#include<iostream>
using namespace std;
class abc;
class pqr;
class xyz
{
	int x,y,z;
	public:
	void input()
		{
			cout<<"enter any three values: \n";
			cin>>x>>y>>z;
		}
		
	friend class abc;
	friend class pqr;
};
class abc
{  
    int r1;
    public:
	void task1_abc(xyz o1)//reverse
	{   
	    int a=o1.x;
		int reversedNumber=0,remainder;
	    while(o1.x!= 0) 
		{
        remainder=o1.x%10;
		reversedNumber = reversedNumber*10 + remainder;
        o1.x /= 10;
        }
        r1=reversedNumber;
       cout<<"1) Reverse of "<<a<<" is : "<<r1;
    }
    void task2_abc(xyz o2)//prime or composite
    {
    	int p,c,i,d;
    	int k=o2.y;
	for(i=2;i<o2.y;i++)
	{
	d=o2.y%i;
	if(d==0)
	{
		cout<<"\n2) "<<k<<" is composite.";
        break;
	}
	else if(d=!0)
	{
		cout<<"\n2) "<<k<<" is prime.";
		break;
	}
	}
     
    }
};
class pqr
{   int s1;
    public:
	void task1_pqr(xyz o3)//square
	{
		int s=o3.z*o3.z;
		cout<<"\n3) square of "<<o3.z<<"is : "<<s;
	}	
};
int main()
{
	
	xyz q;
	abc reverse,check;
	pqr square;
    q.input();
    reverse.task1_abc(q);
    check.task2_abc(q);
    square.task1_pqr(q);

}
