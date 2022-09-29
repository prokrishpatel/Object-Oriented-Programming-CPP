//Initializing string object
#include<iostream>
using namespace std;
int main()
{
string a="Hello";
string b(a);
string c("Hello");
string d,e;
d="Hello";
cout<<a<<" "<<b<<" "<<c<<" "<<d;
cout<<"\nEnter string object value:";
getline(cin,e);
cout<<endl<<e;
return 0;
}


