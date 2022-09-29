#include<iostream>
using namespace std;
class Triangle
{
private:
float b,h;
public:
Triangle()
{
b=h=0;
}
void get_data()
{
cout<<"enter base and height of a triangle: ";
cin>>b>>h;
}
operator float()
{
float a=0.5*b*h;
return a;
}
};
int main()
{
float area;
Triangle T;
T.get_data();
area=T;
cout<<"Area of a triangle is : "<<area;
}

