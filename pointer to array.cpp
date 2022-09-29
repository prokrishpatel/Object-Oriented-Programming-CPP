#include<iostream>
using namespace std;
int main()
{
        int a[100],n,i,max;
        int *p=a;
        cout<<"\nEnter n:";
        cin>>n;
        cout<<"\nEnter array elements:";
        for(int i=0;i<n;i++)
        {
            cin>>*(p+i);
        }
        max=*(p+0);
        for(int i=1;i<n;i++)
        {
            if(*(p+i)>max)
            {
                max=*(p+i);
            }
        }
        cout<<"\nLargest element is:"<<max;
       
}
