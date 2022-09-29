#include<iostream>
using namespace std;
template<class T1,class T2,class T3>
void multiply(T1 num1,T2 num2, T3 num3)
{
	
cout<<num1+num2+num3;
}
int main()
{
int num1=3;
int num2=4;
float num3=4.5;
cout<<"\n sum1";
multiply<int,int,float>(num1,num2,num3);
cout<<endl;
multiply<float,double,int>(2.5,23.56,5);
cout<<endl;
multiply<double,int,int>(456.963,8,9);
cout<<endl;
multiply<double,double,double>(485.89,485.56,56.845);
return 0;
}















