
#include<iostream>
using namespace std;
class Number
{
private:
int x,y;
public:
Number(int n,int n1)
{
x=n;
y=n1;

}
void operator!()
{
x=!x;
y=!y;

}
void show_data()
{
cout<<"\n x="<<x<<"\n";
cout<<"\n y="<<y<<"\n";

}
};
int main()
{
Number N(1,0);
N.show_data();
!N;
N.show_data();
}

