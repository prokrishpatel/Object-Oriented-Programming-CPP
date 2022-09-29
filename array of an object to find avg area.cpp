#include <iostream>
using namespace std;
class rectangle 
{
    int length,breadth;
    public:
    int area;
    void input()
    {
        cout<<"\nEnter length and breadth";
        cin>>length>>breadth;
    }
    int calculate()
    {
        area=length*breadth;
        return area;
    }
};
int main()
{
    rectangle obj[3];
    int sum;
    float avg;
    for(int i=0;i<3;i++)
    {
        obj[i].input();
        cout<<obj[i].calculate();
    }
    sum=0;
    for(int i=0;i<3;i++)
    {
    sum=sum+obj[i].calculate();
    }
    avg=sum/3.0f;
    cout<<"\navg area is:"<<avg;
    return 0;
}
