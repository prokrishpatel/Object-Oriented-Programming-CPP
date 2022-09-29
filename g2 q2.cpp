#include<iostream>
using namespace std;
class overloading
{
int x;
public:
overloading()
{
x=0;
}
overloading(int i)
{
x=i;
}
void show()
{
cout<<x<<endl;
}
overloading operator %(overloading o2)
{
overloading temp;
temp.x=x%o2.x;
return temp;
}
bool operator ||(overloading o4)
{
if(x||o4.x)
return 1;
else
return 0;
}
bool operator >(overloading o6)
{
if(x>o6.x)
return 1;
else
return 0;
}
overloading operator -(overloading o10)
{
overloading temp;
temp.x=x-o10.x;
return temp;
}
};

int main()
{
overloading o1(1),o2(2),o3(3),o4(4),o5(5),o6(6),o7;
o7=((o1%o2) > (o3||o4) - (o5>o6));
o7.show();
}
