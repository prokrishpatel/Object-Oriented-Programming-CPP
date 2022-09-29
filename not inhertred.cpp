#include<iostream>
using namespace std;
class A
{
	int x;
	
};
class B:public A
{
	int y;
};
int main()
{
	B obj;
	cout<<sizeof(obj);
}
