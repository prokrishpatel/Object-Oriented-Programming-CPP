//Pointer to data member
#include<iostream>
using namespace std;
class Test
{
public:
int x;
void show_data();
};
void Test::show_data()
{
cout<<"\n x="<<x;
}
int main()
{
Test t;
int Test::*ptr=&Test::x;
//int Test::*ptr;
//ptr=&Test::x;
t.*ptr=20;//.* is member dereferencing operator//*ptr=x
t.show_data();//20
Test *tp=new Test;//Dynamically allocate memory for object
tp->*ptr=80;//tp=*ptr=x//x=80
tp->show_data();//80
(*tp).*ptr=70;//70
(*tp).show_data();//70
}

