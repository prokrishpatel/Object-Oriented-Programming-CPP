//Default arguments
#include<iostream>
using namespace std;
int calculate(int x=1,int y=2,int z=3)
{
    return x+y+z;
}
int main()
{
    cout<<calculate(10,20,30)<<endl;//60
    cout<<calculate(10,20)<<endl;//33
    cout<<calculate(10)<<endl;//15
    cout<<calculate();//6
        return 0;
}

