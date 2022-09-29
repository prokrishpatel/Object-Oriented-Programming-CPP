#include <iostream>
using namespace std;
class A 
{
    protected:
    int x;
    public:
    A(int a)
    {
        x=a;
    }
};
class B:public A
{
    protected:
    int y;
    public:
    B(int a,int b):A(a)
    {
        y=b;
    }
};
class C:public B
{
    public:
    C(int a,int b):B(a,b)
    {
        int sum=x+y;
        cout<<"\nSum is:"<<sum;
        int rev=0,digit;
        while(sum!=0)
        {
            digit=sum%10;
            rev=rev*10+digit;
            sum=sum/10;
        }
        cout<<"\nReverse is:"<<rev;
    }
};
int main()
{
    C obj(101,102);
    return 0;
}
