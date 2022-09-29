#include <iostream>
using namespace std;
class student
{
    int a[10],key;
    public:
    void input()
    {
        cout<<"\nEnter array elements:";
        for(int i=0;i<10;i++)
        {
        cin>>a[i];
        }
        cout<<"\nEnter element to search:";
        cin>>key;
    }
    int linear()
    {
        int index=-1;
        for(int i=0;i<10;i++)
        {
            if(a[i]==key)
            {
                index=i;
                break;
            }
        }
        return index;
    }
};
int main()
{
    student obj[3];
    int result;
    for(int i=0;i<3;i++)
    {
        obj[i].input();
        result=obj[i].linear();
        if(result==-1)
        {
            cout<<"\nElement not found";
        }
        else 
        {
            cout<<"\nElement found at index: "<<result<<" and exact location: "<<result+1;
        }
    }
    return 0;
}
