#include <iostream>
#include <stdlib.h>
using namespace std;
class example 
{
    int *ptr,n;
    public:
    example()
    {
        cout<<"\nEnter value of n:";
        cin>>n;
        ptr=new int[n];
        if(ptr==NULL)
        {
            cout<<"\nMemory allocation failure!!!";
            exit(1);
        }
        else 
        {
            cout<<"\nMemory allocated succesfully";
        }
    }
    void input()
    {
        cout<<"\nEnter integer values:";
        for(int i=0;i<n;i++)
        {
            cin>>*(ptr+i);
        }
    }
    void task()
    {
        int count=0,flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=2;j<=ptr[i]/2;j++)
            {
                if(ptr[i]%j==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                count++;
            }
            flag=0;
        }
        cout<<"\nPrime array elements are:"<<count;
    }
    ~example()
    {
        delete [] ptr;
        cout<<"\nMemory deallocated successfully";
    }
};
int main()
{
    example obj;
    obj.input();
    obj.task();
    return 0;
}
