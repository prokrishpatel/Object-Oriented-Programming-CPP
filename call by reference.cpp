//Reference variable
#include <iostream>
using namespace std;
int main ()
{
    int a=10;
    int &b=a;
    b=b+2;
    cout<<	a;
    b=50;
    cout<<endl<<a;
    return 0;
}

