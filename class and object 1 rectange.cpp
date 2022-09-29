#include <iostream>
using namespace std;
class rectangle
{
private:
int length,breadth;
public:
void assign(int x,int y)
{
length=x;
breadth=y;
}
int calculate()
{
return length*breadth;
}
};
int main()
{
rectangle obj,obj1;
obj.assign(12,8);
cout<<obj.calculate()<<endl;
obj1.assign(2,3);
cout<<obj1.calculate();
return 0;
}
