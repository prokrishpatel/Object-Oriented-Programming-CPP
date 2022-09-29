#include<iostream>
using namespace std;
class Number
{
private:
int x,y;
public:
Number(int n,int n1)
{
x=n;
y=n1;
cout<<"\n Before overloading:";
cout<<x<<endl;
cout<<y<<endl;
}
friend void operator!(Number);
};
void operator!(Number obj)
{
cout<<"After overloading:\n"<<!obj.x<<endl;
cout<<!obj.y<<endl;

}
int main()
{
Number N(7,8);
!N;
//operator-(N);
}

