#include <iostream>
using namespace std;
class B;
class C;
class A 
{
    int x;
    public:
    void input()
    {
        cout<<"\nEnter x:";
        cin>>x;
    }
    friend int smallest(A,B,C);
};
class B 
{
    int y;
    public:
    void input()
    {
        cout<<"\nEnter y:";
        cin>>y;
    }
    friend int smallest(A,B,C);
};
class C 
{
    int z;
    public:
    void input()
    {
        cout<<"\nEnter z:";
        cin>>z;
    }
    friend int smallest(A,B,C);
};
int smallest(A a,B b,C c)
{
    if(a.x<b.y && a.x<c.z)
    return a.x;
    else if(b.y<a.x && b.y<c.z)
    return b.y;
    else
    return c.z;
}
int main()
{
    A obj1;
    obj1.input();
    B obj2;
    obj2.input();
    C obj3;
    obj3.input();
    cout<<"\nSmallest data member is:"<<smallest(obj1,obj2,obj3);
    return 0;
}




