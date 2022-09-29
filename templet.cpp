#include<iostream>
using namespace std;
template<typename T>
void large(T *num1 ,T *num2)
{
T c;
c=*num1;
*num1=*num2;
*num2=c;
}
int main()
{
int p=3,q=4;
large<int>(&p,&q);
cout<<p<<" "<<q<<endl;
float r=5.6,s=6.4;
large<float>(&r,&s);
cout<<r<<" "<<s<<endl;
double z=123.456,y=125.555;
large<double>(&z,&y);
cout<<z<<" "<<y<<endl;
char k='A',d='B';
large<char>(&k,&d);
cout<<k<<" "<<d<<endl;

return 0;
}
