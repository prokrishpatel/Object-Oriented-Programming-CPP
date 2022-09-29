#include<iostream>
using namespace std;
template <class T1,class T2>
class abc
{
T1 a;
T2 b;
public:
abc(T1 x,T2 y)
{
a=x;
b=y;
}
void sum()
{
cout<<"\n"<<a+b;
}
};
int main()
{
abc<int,float> obj(10,'a');
obj.sum();
abc<double,float>obj1(10.2,34.7f);
obj1.sum();
abc<float,int>obj2(34.5f,90);
obj2.sum();
}


