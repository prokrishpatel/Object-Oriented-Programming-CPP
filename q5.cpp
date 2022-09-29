//Friend class
#include <iostream>
using namespace std;
class B;
class A 
{
    int x,y;
    public:
    void input()
    {
        cout<<"\nEnter x and y values:";
        cin>>x>>y;
    }
    friend class B;
};
class B 
{
    int z;
    public:
    void input()
    {
        cout<<"\nEnter z value:";
        cin>>z;
    }
    void task1(A obj)
    {
        int result=obj.x+z;
        if(result%2==0)
        cout<<"\nEven";
        else 
        cout<<"\nOdd";
    }
    void task2(A obj)
    {
        if(obj.y%5==0)
        cout<<"\nMultiple of 5";
        else 
        cout<<"\nNot a multiple of 5";
    }
};
int main()
{
    A a1;
    a1.input();
    B b1;
    b1.input();
    b1.task1(a1);
    b1.task2(a1);
    return 0;
}
