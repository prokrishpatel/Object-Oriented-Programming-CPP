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
    int max;
    for(int i=0;i<3;i++)
    {
        obj[i].input();
        cout<<obj[i].calculate();
    }
    max=obj[0].area;
    for(int i=1;i<3;i++)
    {
        if(obj[i].area>max)
        {
            max=obj[i].area;
        }
    }
    cout<<"\nLargest area is:"<<max;
    return 0;
}
