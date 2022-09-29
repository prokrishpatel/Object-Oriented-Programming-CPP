#include<iostream>
using namespace std;
class example 
{
    string a;
    public:
    void input()
    {
        cout<<"\nEnter string:";
        getline(cin,a);
    }
    int task()
    {
        int count=0;
        for(int i=0;i<a.length();i++)
        {
            if(a[i]=='a' || a[i]=='e'|| a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A' || a[i]=='E'|| a[i]=='I'||a[i]=='O'||a[i]=='U')
            {
                count++;
            }
        }
        return count;
    }
};
int main()
{
    example obj[2];
    for(int i=0;i<2;i++)
    {
        obj[i].input();
        cout<<obj[i].task();
    }
    return 0;
}

 
