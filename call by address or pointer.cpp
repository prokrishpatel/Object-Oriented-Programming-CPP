//Call by address/or call by pointer
#include <iostream>
using namespace std;
void swap(int *, int *);// function declaration
int main ()
{
   int a = 100;     // local variable declaration
   int b = 200;
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl<<endl;
   swap(&a,&b);    // calling a function to swap values
   cout << "After swap, value of a (in main()):" << a << endl;
   cout << "After swap, value of b (in main()):" << b << endl;
   return 0;
}
void swap(int *px, int *py)
{
   int temp;
   temp = *px;  
   *px = *py;     
   *py = temp; 
   cout << "(in definition):" << *px << endl;
   cout << "(in definition):" << *py << endl<<endl;
}
