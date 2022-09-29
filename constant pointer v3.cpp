//Constant pointer to constant
#include <iostream>
using namespace std;
int main()
{
    int a=10,b=20;
    const int *const ptr=&a;
    cout<<*ptr<<endl;
    //ptr=&b;//Compile time error as ptr is constant pointer[We cannot change the address hold by pointer]
    //*ptr=100;//Compile time error ,We cannot change the value of the variable towards which pointer is pointing
    cout<<*ptr;
    return 0;
}
