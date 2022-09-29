#include <iostream>
using namespace std;
class recursion
{
    int x;
    public:
    int input()
    {
        cout<<"\nEnter x:";
        cin>>x;
        return x;
    }
    int factorial(int a)
    {
        if(a<=1)
        {
            return 1;
        }
        else 
        {
            return a*factorial(a-1);
        }
    }
};
int main()
{
    recursion r1;
    int n=r1.input();//5//n=5
    cout<<"\nFactorial is:"<<r1.factorial(n);
    return 0;
}
