#include<iostream>
using namespace std;
void check(int);//fn declaration
int main()
{
int num;
cout<<"enter any number: ";
cin>>num;
check(num);//fn calling(actual argument)(calling by value defalt parameter passing mechanisum)
return 0;
}
void check(int x)//fn header (formal argument)
{
	// function body
	if(x%2==0)
	{
		cout<<"\nnumber is even";
	}
	else
	cout<<"\nnumber is odd";
}
