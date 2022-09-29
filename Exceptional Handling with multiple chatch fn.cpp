#include<iostream>
using namespace std;
void Test()
{
int m[5],t;
for(int i=0;i<5;i++)
{
	cout<<"enter marks "<<i+1<<": ";
	cin>>m[i];
	t=t+m[i];
}
try
{
if(t%3==0)
throw 0; 
else if(t%5==0)
throw 0.0f; 
else if (t%7==0)
throw 'Z'; 
}
catch(char c) //catch 1
{ cout<<"\ncaught a character";}
catch(int m)
{ cout<<"\ncaught an integer";}
catch(float d)
{ cout<<"\ncaught a float";}
cout<<"\nEnd of try-catch system";
}
int main()
{
cout<<"\ntesting multiple catches";
Test();
return 0; //and control passes to the next //statement after last catch
}

