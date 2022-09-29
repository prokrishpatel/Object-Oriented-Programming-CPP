#include<iostream>
using namespace std;
class overloading
{
public:
int volume(int l, int b, int h)
{
        return (l*b*h);
}
int volume(int side)
{
        return (side*side*side);
}
float volume(float radius,int height)
{
        return (3.14*radius*radius*height);
}
};
int main()
{
        overloading obj1;
        int cuboid,cube;
        float cylinder;
        cuboid=obj1.volume(5,8,9);
        cube=obj1.volume(5);
        cylinder=obj1.volume(5.5f,5);
        cout<<cuboid<<"\n"<<cube<<"\n"<<cylinder;
        return 0;
}


