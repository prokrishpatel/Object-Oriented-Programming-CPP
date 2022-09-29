#include <iostream>
#include <stdlib.h>
using namespace std;
class example 
{
    int *ptr,n;
    public:
    void allocation()
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
    int n;
    cout<<"\nEnter number of array sets you want to work with:";
    cin>>n;
    example *ptr=new example[n];
    example *ptr1=ptr;
    example *ptr2=ptr1;
    for(int i=0;i<n;i++)
    {
        ptr->allocation();
        ptr->input();
        ptr++;
    }
     for(int i=0;i<n;i++)
    {
        ptr1->task();
        ptr1++;
    }
    delete[] ptr2;
    cout<<"\nMemory deallocated for array of objects";
    return 0;
}

