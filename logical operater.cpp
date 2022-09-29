#include<iostream>
using namespace std;
class logic
{
	int x;
	public:
		
		logic(int x1)
		{
		x=x1;	
		}
	bool operator&&(logic o2)
	{
		if(x&&o2.x)
		return 1;
		else
		return 0;
	}
	friend bool operator ||(logic, logic);
};
bool operator||(logic o3, logic o4)
{
	if(o3.x||o4.x)
	return 1;
	else 
	return 0;
}
int main()
{
	int x,y;
	logic o1(1),o2(2);
	x=o1&&o2;
	cout<<x<<endl;
	y=o1||o2;
	cout<<y;
}
