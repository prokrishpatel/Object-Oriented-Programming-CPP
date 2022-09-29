//Dangling pointer(Compile time memory allocation case) with solution
#include <iostream>
using namespace std;
int main()
{
 int *ptr;
 {
 int a=10;
 ptr=&a;
 cout<<*ptr<<endl;
 cout<<ptr<<endl;
 }
 ptr=NULL;
 cout<<ptr;//Zero will be printed(No longer a dangling pointer)
 return 0;
}
