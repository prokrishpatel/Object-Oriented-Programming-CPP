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
    int sum(int a)
    {
        if(a<=0)
        {
            return 0;
        }
        else 
        {
            return a+sum(a-1);
        }
    }
};
int main()
{
    recursion r1;
    int n=r1.input();
    cout<<"\nsum:"<<r1.sum(n);
    return 0;
}
