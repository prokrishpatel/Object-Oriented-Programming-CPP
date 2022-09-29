
#include<iostream>
using namespace std;
class Distance
{
private:
int km,m;
public:
Distance()
{
km=m=0;
}
Distance(int d)
{
km=d/1000;
m=d%1000;
}
void show_data()
{
cout<<km<<"KM"<<m<<"M";
}
};
int main()
{
int dis;
cout<<"\n Enter the meters";
cin>>dis;
Distance d1;
d1=dis;
d1.show_data();
}


