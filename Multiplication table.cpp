#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{   
    int n;
	ifstream num;
	num.open("int_source.txt");
	if(!num)
	{
		cout<<"File Not Found!!";
		exit(1);
	}
	num>>n;
	if(n>=0&&n<=50&&n!=' ')
	{
	num.close();
	ofstream mul;
	mul.open("multiplication_table.txt");
    if(!mul)
	{
		cout<<"File Not Found!!";
		exit(1);
	}
	mul<<"Multiplication Table For "<<n<<"\n";
	for(int i=1;i<=10;i++)
	{
	mul<<n<<"X"<<i<<"="<<n*i<<"\n";
	}
	mul.close();
	cout<<"\nTask Done You Can Check Thankyou";
    }
    else
	{
		cout<<"Sorry Something Went Wrong\nPlease Check The Following points to find out the problem and according try again,\nmay be\n1)Data not found in int_source.txt file";
		cout<<"\n2)Enter data is very large not in range of 0 to 50";
		cout<<"\n thankyou";
	}
}
