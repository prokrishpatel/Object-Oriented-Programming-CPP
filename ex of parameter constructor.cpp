//Parameterized constructor
#include<iostream>
using namespace std;
class rectangle
{
    int x,y;
    public:
    rectangle(int a,int b)
    {
        x=a;
        y=b;
    }
    int task()
    {
     return x*y;
    }
};
int main()
{
  int m,n;
  cout<<"enter side's of rectangle: ";
  cin>>m>>n;
  rectangle obj(m,n);
  cout<<obj.task();
    return 0;
}


