//Generic(or void pointer)
#include <iostream>
using namespace std;
int main()
{
    int a=10;
    float b=34.56f;
    char c='A';
    void *ptr=&a;
    cout<<*(int*)ptr<<endl;
    ptr=&b;
    cout<<*(float*)ptr<<endl;
    ptr=&c;
    cout<<*(char*)ptr;
    return 0;
}
