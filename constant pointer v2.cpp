//Pointer to constant
#include <iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    const int *ptr=&a;
    cout<<*ptr<<endl;
    ptr=&b;
    cout<<*ptr;
    *ptr=100;//Compile time error will come as we cannot modify the value
    return 0;
}
