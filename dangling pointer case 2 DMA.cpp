//DMA case(Dangling pointer)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"\nEnter number of values you want to work with:";
    cin>>n;
    int *ptr=new int[n];
    cout<<"\nEnter" <<n <<"values:";
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }
    cout<<"\nEntered values are:";
    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    cout<<"\nAddress containted in pointer before memory deallocation:"<<ptr;
    delete [] ptr;
    cout<<"\nAddress contained in pointer after memory deallocation:"<<ptr;//Same address is printed(Dangling pointer)
    return 0;
}
