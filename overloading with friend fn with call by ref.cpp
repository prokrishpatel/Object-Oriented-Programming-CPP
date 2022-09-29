#include<iostream>
using namespace std;
class Number
{
private:
int x,y,z;
public:
Number(int n,int n1,int n2)
{
x=n;
y=n1;
z=n2;
cout<<"\n Before overloading:";
cout<<x<<endl;
cout<<y<<endl;
cout<<z<<endl;
}
void show_data()
{
cout<<"\n x="<<x<<"\n";
cout<<"\n y="<<y<<"\n";
cout<<"\n z="<<z<<"\n";
}
friend void operator-(Number&);//By reference
};
void operator-(Number &obj)//obj will become alias for passed object N
{
obj.x=-obj.x;
obj.y=-obj.y;
obj.z=-obj.z;
}
int main()
{
Number N(7,8,9);
-N;
N.show_data();
//operator-(N);
}


