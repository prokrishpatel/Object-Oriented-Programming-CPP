//Pointer to member function
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
void(Test::*fp)()=&Test::input;
(t.*fp)();
cout<<"\nPerimeter of square is:"<<4*(t.*ptr);
Test *tp=new Test;//Dynamically allocate memory for object
(tp->*fp)();
cout<<"\nPerimeter of square is:"<<4*(tp->*ptr);
}

