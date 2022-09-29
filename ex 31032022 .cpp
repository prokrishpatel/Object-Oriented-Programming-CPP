#include <iostream>
using namespace std;
class A 
{
    public:
    A()
    {
        cout<<"\nA base default";
    }
    ~A()
    {
        cout<<"\nA base destructor";
    }
};
class B 
{
    public:
    B()
    {
        cout<<"\nB base default";
    }
    ~B()
    {
        cout<<"\nB base destructor";
    }
};
class C:public A,public B 
{
    public:
    C()
    {
        cout<<"\nC derived default";
    }
    ~C()
    {
        cout<<"\nC derived destructor";
    }
};
int main()
{
    C obj;
    return 0;
}
