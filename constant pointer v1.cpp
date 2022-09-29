//Constant pointer
#include <iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    int *const ptr=&a;
    cout<<*ptr;
   // ptr=&b;//Compile time error as ptr is constant pointer
    return 0;
}
