//Pointer to data member
#include<iostream>
using namespace std;
class Test
{
public:
int x;
void input()
{
    cout<<"\nEnter x:";
    cin>>x;
}
};
int main()
{
Test t;
int Test::*ptr=&Test::x;
t.input();
cout<<"\nPerimeter of square is:"<<4*(t.*ptr);
Test *tp=new Test;//Dynamically allocate memory for object
tp->input();
cout<<"\nPerimeter of square is:"<<4*(tp->*ptr);
}

