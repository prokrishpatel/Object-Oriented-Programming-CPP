//Multilevel inheritance
#include<iostream>
using namespace std;
class length
{
protected:
int l;
public:
void getdatal()
{
cout<<"\n Enter value of l:";
cin>>l;
}
};
class breadth:public length
{
protected:
int b;
public:
void getdatab()
{
cout<<"\n Enter value of b:";
cin>>b;
}
class height:public breadth
{
protected:
int h;
public:
void getdatah()
{
cout<<"\n Enter value of h:";
cin>>h;
}
};
class volume:public height
{
private:
int v;
public:

void getvol()
{
	int result;
result=l*b*h;
cout<<"\n Final result is:"<<result;
}
};
int main()
{
Z obj1;
obj1.getdatal();
obj1.getdatab();
obj1.getdatah();
obj1.getvol();
return 0;
}


