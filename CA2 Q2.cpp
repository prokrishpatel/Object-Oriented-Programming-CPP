#include<iostream>
using namespace std;
class overloading 
{ 
int x;
public:
	overloading()
	{
		x=0;
	}
	overloading(int i)
	{
		x=i;
	}
	void show()
	{
		cout<<x<<endl;
	}
	friend bool operator >=(overloading,overloading);
	friend bool operator &&(overloading,overloading);
	friend bool operator <(overloading,overloading);
	friend overloading operator +(overloading,overloading);
	friend overloading operator *(overloading,overloading);
};
bool operator >=(overloading o1,overloading o2)
{
	if(o1.x>=o2.x)
	return 1;
	else
	return 0;
}
bool operator &&(overloading o3,overloading o4)
{
	if(o3.x&&o4.x)
	return 1;
	else
	return 0;
}
bool operator <(overloading o5,overloading o6)
{
	if(o5.x<o6.x)
	return 1;
	else
	return 0;
}
overloading operator +(overloading o7,overloading o8)
{
	overloading temp;
	temp.x=o7.x+o8.x;
	return temp;
}
overloading operator *(overloading o9,overloading o10)
{
	overloading temp;
	temp.x=o9.x*o10.x;
	return temp;
}
int main()
{
	overloading o1(1),o2(2),o3(3),o4(4),o5(5),o6(6),o7;
	o7=((o1>=o2) + (o3&&o4) * (o5<o6));
	o7.show();
}
