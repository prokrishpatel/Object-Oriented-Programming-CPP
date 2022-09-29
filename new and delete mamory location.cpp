#include<iostream>
using namespace std;
int main()
{
	int *ptr= new int;
	*ptr=5;
	cout<<*ptr<<"\n";
	cout<<ptr<<"\n";
	delete ptr;
	//ptr=0;
	cout<<ptr;
}
