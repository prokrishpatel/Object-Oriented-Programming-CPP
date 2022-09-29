#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3,s4,s5,t;
	cout<<"Enter the marks obtained in 5 subjects:\n";
	cin>>s1>>s2>>s3>>s4>>s5;
	 t=((s1+s2+s3+s4+s5)/500)*100;
	 if(t>=0&&t<25)
	 {cout<<"You have Obtain D grade";}
	 else if(t>=25&&t<50)
	 {cout<<"you have obtain C grade";}
	 else if(t>=50&&t<75)
	 {cout<<"you have obtain B grade";}
	else 
	 {cout<<"you have obtain A grade";}
	return 0;
}
