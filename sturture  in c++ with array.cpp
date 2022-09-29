//structure(By default the members are public and array of structure(or objects) is also created)
#include <iostream>
using namespace std;
struct rectangle 
{
    int length,breadth,area;
    void input()
    {
        cout<<"\nEnter length and breadth";
        cin>>length>>breadth;
    }
    int calculate()
    {
        area=length*breadth;
        return cout<<area;
    }
};
int main()
{
    rectangle obj[3];//Array of structure
    int sum=0;
    float avg;
    for(int i=0;i<3;i++)
    {
        obj[i].input();
        cout<<obj[i].calculate();
    }
    for(int i=0;i<3;i++)
    {
        sum=sum+obj[i].calculate();
    }
    avg=sum/3.0f;
    cout<<"\nAverage is:"<<avg;
    return 0;
}
